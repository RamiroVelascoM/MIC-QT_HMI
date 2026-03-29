#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QtSerialPort/QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QInputDialog>
#include <QMessageBox>
#include "qdatetime.h"
#include <QtNetwork/QUdpSocket>
#include <QtNetwork/QHostAddress>
#include <mpu6050_qt.h>
#include <qpaintbox.h>
#include <QPainter>
#include <QStyle>

typedef union{
    uint8_t     u8[4];
    int8_t      i8[4];
    uint16_t    u16[2];
    int16_t     i16[2];
    uint32_t    u32;
    int32_t     i32;
    float       f;
}_work;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OnQTimer1();

    bool eventFilter(QObject *watched, QEvent *event) override;

    void OnRxChar();

    void DecodeHeader(uint8_t *buf, int count);

    void onRxUDP();

    void DecodeCmd(uint8_t *rxBuf);

    void DrawMotionMPU();

    void DrawMovement();

    void buttons(QAbstractButton *button);

    void SendCMD(uint8_t *buf, uint8_t length);

    void on_SendCMD_Button_clicked();

    void on_LimpiarCMD_Button_clicked();

    void on_Connect_USB_clicked();

    void on_Connect_WIFI_Button_clicked();

    void on_startModeButton_clicked();

private:
    typedef enum
    {
        ACKNOWLEDGE = 0x0D,
        GETLOCALIP = 0xE0,
        ALIVE = 0xF0,
        FIRMWARE = 0xF1,
        ANALOG_IR = 0xF2,
        MPU_6050 = 0xF3,
        DISPLAY_SSD1306 = 0xF4,
        RECEIVE_N20 = 0xF5,
        SEND_N20 = 0xF6,
        BUTTONS = 0xF7,
        CONTROL_MODE = 0xF8,

        SET_IR_THRESHOLD = 0xE1,
        SET_PID_NAV = 0xE2,
        SET_PID_TURN = 0xE3,
        SET_PID_U_TURN = 0xE4,

        UNKNOWNCOMMAND = 0xFF
    }_eIDCommand;

    typedef struct{
        int32_t width;
        int32_t height;
    }_sWidgetSize;

    uint8_t rxBuf[256], header, nBytes, cks, index, tmoRX, indexWifi = 0;
    uint8_t localTimeRef = 0;
    uint8_t MODESTARTED = 0;

    Ui::MainWindow *ui;

    QSerialPort *QSerialPort1;

    QUdpSocket *QUdpSocket1;
    QHostAddress  hostAddress;
    quint16   remotePort;

    QTimer *QTimer1;

    QDateTime dt;

    QButtonGroup *botones;

    // PID
    int32_t Data_PID_Nav[5], Data_PID_Turn[5], Data_PID_U_Turn[5];

    // MPU6050
    _sMPU myMPU;
    _sFMM myAx, myAy, myAz, myGx, myGy, myGz;

    // MOTORES
    int8_t powerMotorLEFT = 0;
    int8_t powerMotorRIGHT = 0;

    // RADAR
    _sWidgetSize widgetSize;
    bool radarDrawing = false;
    bool carAlive = false;
    uint8_t radarStatus;
    QPaintBox *QPaintBox1;
};
#endif // MAINWINDOW_H
