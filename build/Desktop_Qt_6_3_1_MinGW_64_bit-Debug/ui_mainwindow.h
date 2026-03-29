/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QLabel *label_13;
    QWidget *Config;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *VELOCITY_2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_2;
    QLabel *AliveLabel;
    QGroupBox *VELOCITY;
    QGridLayout *gridLayout_8;
    QPushButton *startModeButton;
    QLabel *EstadoBotonLabel;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QGroupBox *ACCELERATION;
    QGridLayout *gridLayout_5;
    QLabel *AXLabel;
    QLineEdit *AX_Data;
    QLineEdit *AZ_Data;
    QLabel *AZLabel;
    QLineEdit *AY_Data;
    QLabel *AYLabel;
    QGroupBox *GYRO;
    QGridLayout *gridLayout_6;
    QLabel *GXLabel;
    QLabel *GYLabel;
    QLabel *GZLabel;
    QLineEdit *GX_Data;
    QLineEdit *GY_Data;
    QLineEdit *GZ_Data;
    QGroupBox *RPY;
    QGridLayout *gridLayout_7;
    QLabel *YAWData;
    QLineEdit *Yaw_Data;
    QLineEdit *PX_Data;
    QLabel *PXLabel;
    QLineEdit *PY_Data;
    QLabel *PYLabel;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QGroupBox *LEFTMOTOR;
    QGridLayout *gridLayout_10;
    QProgressBar *LMPOW_POS;
    QProgressBar *LMPOW_NEG;
    QGroupBox *RIGHTMOTOR;
    QGridLayout *gridLayout_11;
    QProgressBar *RMPOW_POS;
    QProgressBar *RMPOW_NEG;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *none_label_5;
    QLineEdit *ir_4;
    QLineEdit *none_label_3;
    QLineEdit *ir_3;
    QLineEdit *none_label_18;
    QLineEdit *none_label;
    QLineEdit *none_label_16;
    QLineEdit *none_label_8;
    QLineEdit *none_label_19;
    QLineEdit *none_label_14;
    QLineEdit *ir_6;
    QLineEdit *none_label_22;
    QLineEdit *none_label_2;
    QLineEdit *none_label_20;
    QLineEdit *none_label_23;
    QLineEdit *ir_0;
    QLineEdit *none_label_6;
    QLineEdit *none_label_13;
    QLineEdit *none_label_21;
    QLineEdit *ir_7;
    QLineEdit *none_label_12;
    QLineEdit *none_label_17;
    QLineEdit *ir_2;
    QLineEdit *none_label_15;
    QLineEdit *none_label_9;
    QLineEdit *ir_1;
    QLineEdit *none_label_10;
    QLineEdit *ir_5;
    QLineEdit *none_label_11;
    QLineEdit *none_label_7;
    QLabel *label_8;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QGroupBox *PID_NAV;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *KI_NAV_Label;
    QLineEdit *KI_NAV_Data;
    QVBoxLayout *verticalLayout_14;
    QLabel *KD_NAV_Label;
    QLineEdit *KD_NAV_Data;
    QVBoxLayout *verticalLayout_12;
    QLabel *KP_NAV_Label;
    QLineEdit *KP_NAV_Data;
    QGroupBox *PID_NAV_2;
    QGridLayout *gridLayout_13;
    QLabel *Base_NAV_Label;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *PWM_NAV_Data;
    QLabel *PWM_NAV_Label;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *Base_NAV_Data;
    QVBoxLayout *verticalLayout_18;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QGroupBox *PID_NAV_3;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_16;
    QLabel *KI_NAV_Label_2;
    QLineEdit *KI_UT_Data;
    QVBoxLayout *verticalLayout_17;
    QLabel *KD_NAV_Label_2;
    QLineEdit *KD_UT_Data;
    QVBoxLayout *verticalLayout_20;
    QLabel *KP_UT_Label;
    QLineEdit *KP_UT_Data;
    QGroupBox *PID_NAV_4;
    QGridLayout *gridLayout_15;
    QLabel *Base_NAV_Label_2;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *PWM_UT_Data;
    QLabel *PWM_NAV_Label_2;
    QVBoxLayout *verticalLayout_22;
    QLineEdit *Base_UT_Data;
    QVBoxLayout *verticalLayout_23;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_12;
    QGroupBox *PID_NAV_5;
    QGridLayout *gridLayout_16;
    QVBoxLayout *verticalLayout_24;
    QLabel *KI_NAV_Label_3;
    QLineEdit *KI_TURN_Data;
    QVBoxLayout *verticalLayout_25;
    QLabel *KD_NAV_Label_3;
    QLineEdit *KD_TURN_Data;
    QVBoxLayout *verticalLayout_26;
    QLabel *KP_NAV_Label_3;
    QLineEdit *KP_TURN_Data;
    QGroupBox *PID_NAV_6;
    QGridLayout *gridLayout_17;
    QLabel *Base_NAV_Label_3;
    QVBoxLayout *verticalLayout_27;
    QLineEdit *PWM_TURN_Data;
    QLabel *PWM_NAV_Label_3;
    QVBoxLayout *verticalLayout_28;
    QLineEdit *Base_TURN_Data;
    QVBoxLayout *verticalLayout_29;
    QWidget *CommData;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox_PORTS;
    QPushButton *Connect_USB;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *SendCMD_Button;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPlainTextEdit *Comandos_CMD;
    QPushButton *LimpiarCMD_Button;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *Connect_WIFI_Button;
    QWidget *Graph;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QWidget *positionRadar;
    QPushButton *Home_Button;
    QPushButton *Data_Button;
    QPushButton *Comm_Button;
    QPushButton *Graph_Button;
    QLabel *label_14;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1200, 740);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1200, 740));
        MainWindow->setMaximumSize(QSize(1200, 740));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 70, 1180, 621));
        stackedWidget->setFrameShape(QFrame::WinPanel);
        stackedWidget->setFrameShadow(QFrame::Raised);
        stackedWidget->setLineWidth(3);
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);"));
        label_13 = new QLabel(Home);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 20, 1151, 591));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logscaled.png")));
        label_13->setScaledContents(true);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13->setTextInteractionFlags(Qt::NoTextInteraction);
        stackedWidget->addWidget(Home);
        Config = new QWidget();
        Config->setObjectName(QString::fromUtf8("Config"));
        Config->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);"));
        verticalLayoutWidget_5 = new QWidget(Config);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 20, 341, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_5->addWidget(label_5);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        VELOCITY_2 = new QGroupBox(verticalLayoutWidget_5);
        VELOCITY_2->setObjectName(QString::fromUtf8("VELOCITY_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VELOCITY_2->sizePolicy().hasHeightForWidth());
        VELOCITY_2->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        VELOCITY_2->setFont(font1);
        VELOCITY_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        VELOCITY_2->setAlignment(Qt::AlignCenter);
        gridLayout_9 = new QGridLayout(VELOCITY_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(2);
        gridLayout_9->setVerticalSpacing(0);
        gridLayout_9->setContentsMargins(3, 3, 3, 3);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        AliveLabel = new QLabel(VELOCITY_2);
        AliveLabel->setObjectName(QString::fromUtf8("AliveLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(AliveLabel->sizePolicy().hasHeightForWidth());
        AliveLabel->setSizePolicy(sizePolicy3);
        AliveLabel->setFont(font1);
        AliveLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: red;\n"
"color: white;"));
        AliveLabel->setFrameShape(QFrame::Box);
        AliveLabel->setFrameShadow(QFrame::Plain);
        AliveLabel->setLineWidth(1);
        AliveLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(AliveLabel, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(VELOCITY_2);

        VELOCITY = new QGroupBox(verticalLayoutWidget_5);
        VELOCITY->setObjectName(QString::fromUtf8("VELOCITY"));
        sizePolicy2.setHeightForWidth(VELOCITY->sizePolicy().hasHeightForWidth());
        VELOCITY->setSizePolicy(sizePolicy2);
        VELOCITY->setFont(font1);
        VELOCITY->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        VELOCITY->setAlignment(Qt::AlignCenter);
        gridLayout_8 = new QGridLayout(VELOCITY);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(2);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(3, 3, 3, 3);
        startModeButton = new QPushButton(VELOCITY);
        startModeButton->setObjectName(QString::fromUtf8("startModeButton"));
        sizePolicy3.setHeightForWidth(startModeButton->sizePolicy().hasHeightForWidth());
        startModeButton->setSizePolicy(sizePolicy3);
        startModeButton->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: red;\n"
"color: rgb(255, 255, 255);"));
        startModeButton->setCheckable(true);
        startModeButton->setFlat(false);

        gridLayout_8->addWidget(startModeButton, 1, 2, 1, 1);

        EstadoBotonLabel = new QLabel(VELOCITY);
        EstadoBotonLabel->setObjectName(QString::fromUtf8("EstadoBotonLabel"));
        sizePolicy3.setHeightForWidth(EstadoBotonLabel->sizePolicy().hasHeightForWidth());
        EstadoBotonLabel->setSizePolicy(sizePolicy3);
        EstadoBotonLabel->setFont(font1);
        EstadoBotonLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        EstadoBotonLabel->setFrameShape(QFrame::Box);
        EstadoBotonLabel->setFrameShadow(QFrame::Plain);
        EstadoBotonLabel->setLineWidth(1);
        EstadoBotonLabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(EstadoBotonLabel, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(VELOCITY);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_30->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_30);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayoutWidget_6 = new QWidget(Config);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(20, 130, 341, 281));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);

        verticalLayout_6->addWidget(label_6);

        ACCELERATION = new QGroupBox(verticalLayoutWidget_6);
        ACCELERATION->setObjectName(QString::fromUtf8("ACCELERATION"));
        ACCELERATION->setFont(font1);
        ACCELERATION->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        ACCELERATION->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(ACCELERATION);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(2);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        AXLabel = new QLabel(ACCELERATION);
        AXLabel->setObjectName(QString::fromUtf8("AXLabel"));
        sizePolicy1.setHeightForWidth(AXLabel->sizePolicy().hasHeightForWidth());
        AXLabel->setSizePolicy(sizePolicy1);
        AXLabel->setFont(font1);
        AXLabel->setLayoutDirection(Qt::LeftToRight);
        AXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        AXLabel->setFrameShape(QFrame::Box);
        AXLabel->setFrameShadow(QFrame::Plain);
        AXLabel->setLineWidth(1);
        AXLabel->setTextFormat(Qt::AutoText);
        AXLabel->setAlignment(Qt::AlignCenter);
        AXLabel->setWordWrap(false);

        gridLayout_5->addWidget(AXLabel, 0, 0, 1, 1);

        AX_Data = new QLineEdit(ACCELERATION);
        AX_Data->setObjectName(QString::fromUtf8("AX_Data"));
        sizePolicy3.setHeightForWidth(AX_Data->sizePolicy().hasHeightForWidth());
        AX_Data->setSizePolicy(sizePolicy3);
        AX_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        AX_Data->setAlignment(Qt::AlignCenter);
        AX_Data->setReadOnly(true);

        gridLayout_5->addWidget(AX_Data, 1, 0, 1, 1);

        AZ_Data = new QLineEdit(ACCELERATION);
        AZ_Data->setObjectName(QString::fromUtf8("AZ_Data"));
        sizePolicy3.setHeightForWidth(AZ_Data->sizePolicy().hasHeightForWidth());
        AZ_Data->setSizePolicy(sizePolicy3);
        AZ_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        AZ_Data->setAlignment(Qt::AlignCenter);
        AZ_Data->setReadOnly(true);

        gridLayout_5->addWidget(AZ_Data, 1, 2, 1, 1);

        AZLabel = new QLabel(ACCELERATION);
        AZLabel->setObjectName(QString::fromUtf8("AZLabel"));
        sizePolicy1.setHeightForWidth(AZLabel->sizePolicy().hasHeightForWidth());
        AZLabel->setSizePolicy(sizePolicy1);
        AZLabel->setFont(font1);
        AZLabel->setLayoutDirection(Qt::LeftToRight);
        AZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AZLabel->setFrameShape(QFrame::Box);
        AZLabel->setLineWidth(1);
        AZLabel->setTextFormat(Qt::AutoText);
        AZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(AZLabel, 0, 2, 1, 1);

        AY_Data = new QLineEdit(ACCELERATION);
        AY_Data->setObjectName(QString::fromUtf8("AY_Data"));
        sizePolicy3.setHeightForWidth(AY_Data->sizePolicy().hasHeightForWidth());
        AY_Data->setSizePolicy(sizePolicy3);
        AY_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        AY_Data->setAlignment(Qt::AlignCenter);
        AY_Data->setReadOnly(true);

        gridLayout_5->addWidget(AY_Data, 1, 1, 1, 1);

        AYLabel = new QLabel(ACCELERATION);
        AYLabel->setObjectName(QString::fromUtf8("AYLabel"));
        sizePolicy1.setHeightForWidth(AYLabel->sizePolicy().hasHeightForWidth());
        AYLabel->setSizePolicy(sizePolicy1);
        AYLabel->setFont(font1);
        AYLabel->setLayoutDirection(Qt::LeftToRight);
        AYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        AYLabel->setFrameShape(QFrame::Box);
        AYLabel->setLineWidth(1);
        AYLabel->setTextFormat(Qt::AutoText);
        AYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(AYLabel, 0, 1, 1, 1);


        verticalLayout_6->addWidget(ACCELERATION);

        GYRO = new QGroupBox(verticalLayoutWidget_6);
        GYRO->setObjectName(QString::fromUtf8("GYRO"));
        GYRO->setFont(font1);
        GYRO->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        GYRO->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(GYRO);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(2);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(3, 3, 3, 3);
        GXLabel = new QLabel(GYRO);
        GXLabel->setObjectName(QString::fromUtf8("GXLabel"));
        sizePolicy1.setHeightForWidth(GXLabel->sizePolicy().hasHeightForWidth());
        GXLabel->setSizePolicy(sizePolicy1);
        GXLabel->setFont(font1);
        GXLabel->setLayoutDirection(Qt::LeftToRight);
        GXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        GXLabel->setFrameShape(QFrame::Box);
        GXLabel->setFrameShadow(QFrame::Plain);
        GXLabel->setLineWidth(1);
        GXLabel->setTextFormat(Qt::AutoText);
        GXLabel->setAlignment(Qt::AlignCenter);
        GXLabel->setWordWrap(false);

        gridLayout_6->addWidget(GXLabel, 0, 0, 1, 1);

        GYLabel = new QLabel(GYRO);
        GYLabel->setObjectName(QString::fromUtf8("GYLabel"));
        sizePolicy1.setHeightForWidth(GYLabel->sizePolicy().hasHeightForWidth());
        GYLabel->setSizePolicy(sizePolicy1);
        GYLabel->setFont(font1);
        GYLabel->setLayoutDirection(Qt::LeftToRight);
        GYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        GYLabel->setFrameShape(QFrame::Box);
        GYLabel->setLineWidth(1);
        GYLabel->setTextFormat(Qt::AutoText);
        GYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(GYLabel, 0, 1, 1, 1);

        GZLabel = new QLabel(GYRO);
        GZLabel->setObjectName(QString::fromUtf8("GZLabel"));
        sizePolicy1.setHeightForWidth(GZLabel->sizePolicy().hasHeightForWidth());
        GZLabel->setSizePolicy(sizePolicy1);
        GZLabel->setFont(font1);
        GZLabel->setLayoutDirection(Qt::LeftToRight);
        GZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        GZLabel->setFrameShape(QFrame::Box);
        GZLabel->setLineWidth(1);
        GZLabel->setTextFormat(Qt::AutoText);
        GZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(GZLabel, 0, 2, 1, 1);

        GX_Data = new QLineEdit(GYRO);
        GX_Data->setObjectName(QString::fromUtf8("GX_Data"));
        sizePolicy3.setHeightForWidth(GX_Data->sizePolicy().hasHeightForWidth());
        GX_Data->setSizePolicy(sizePolicy3);
        GX_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        GX_Data->setAlignment(Qt::AlignCenter);
        GX_Data->setReadOnly(true);

        gridLayout_6->addWidget(GX_Data, 1, 0, 1, 1);

        GY_Data = new QLineEdit(GYRO);
        GY_Data->setObjectName(QString::fromUtf8("GY_Data"));
        sizePolicy3.setHeightForWidth(GY_Data->sizePolicy().hasHeightForWidth());
        GY_Data->setSizePolicy(sizePolicy3);
        GY_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        GY_Data->setAlignment(Qt::AlignCenter);
        GY_Data->setReadOnly(true);

        gridLayout_6->addWidget(GY_Data, 1, 1, 1, 1);

        GZ_Data = new QLineEdit(GYRO);
        GZ_Data->setObjectName(QString::fromUtf8("GZ_Data"));
        sizePolicy3.setHeightForWidth(GZ_Data->sizePolicy().hasHeightForWidth());
        GZ_Data->setSizePolicy(sizePolicy3);
        GZ_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        GZ_Data->setAlignment(Qt::AlignCenter);
        GZ_Data->setReadOnly(true);

        gridLayout_6->addWidget(GZ_Data, 1, 2, 1, 1);


        verticalLayout_6->addWidget(GYRO);

        RPY = new QGroupBox(verticalLayoutWidget_6);
        RPY->setObjectName(QString::fromUtf8("RPY"));
        RPY->setFont(font1);
        RPY->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        RPY->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(RPY);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(2);
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(3, 3, 3, 3);
        YAWData = new QLabel(RPY);
        YAWData->setObjectName(QString::fromUtf8("YAWData"));
        sizePolicy1.setHeightForWidth(YAWData->sizePolicy().hasHeightForWidth());
        YAWData->setSizePolicy(sizePolicy1);
        YAWData->setFont(font1);
        YAWData->setLayoutDirection(Qt::LeftToRight);
        YAWData->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        YAWData->setFrameShape(QFrame::Box);
        YAWData->setLineWidth(1);
        YAWData->setTextFormat(Qt::AutoText);
        YAWData->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(YAWData, 0, 2, 1, 1);

        Yaw_Data = new QLineEdit(RPY);
        Yaw_Data->setObjectName(QString::fromUtf8("Yaw_Data"));
        sizePolicy3.setHeightForWidth(Yaw_Data->sizePolicy().hasHeightForWidth());
        Yaw_Data->setSizePolicy(sizePolicy3);
        Yaw_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        Yaw_Data->setAlignment(Qt::AlignCenter);
        Yaw_Data->setReadOnly(true);

        gridLayout_7->addWidget(Yaw_Data, 1, 2, 1, 1);

        PX_Data = new QLineEdit(RPY);
        PX_Data->setObjectName(QString::fromUtf8("PX_Data"));
        sizePolicy3.setHeightForWidth(PX_Data->sizePolicy().hasHeightForWidth());
        PX_Data->setSizePolicy(sizePolicy3);
        PX_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        PX_Data->setAlignment(Qt::AlignCenter);
        PX_Data->setReadOnly(true);

        gridLayout_7->addWidget(PX_Data, 1, 0, 1, 1);

        PXLabel = new QLabel(RPY);
        PXLabel->setObjectName(QString::fromUtf8("PXLabel"));
        sizePolicy1.setHeightForWidth(PXLabel->sizePolicy().hasHeightForWidth());
        PXLabel->setSizePolicy(sizePolicy1);
        PXLabel->setFont(font1);
        PXLabel->setLayoutDirection(Qt::LeftToRight);
        PXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        PXLabel->setFrameShape(QFrame::Box);
        PXLabel->setFrameShadow(QFrame::Plain);
        PXLabel->setLineWidth(1);
        PXLabel->setTextFormat(Qt::AutoText);
        PXLabel->setAlignment(Qt::AlignCenter);
        PXLabel->setWordWrap(false);

        gridLayout_7->addWidget(PXLabel, 0, 0, 1, 1);

        PY_Data = new QLineEdit(RPY);
        PY_Data->setObjectName(QString::fromUtf8("PY_Data"));
        sizePolicy3.setHeightForWidth(PY_Data->sizePolicy().hasHeightForWidth());
        PY_Data->setSizePolicy(sizePolicy3);
        PY_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        PY_Data->setAlignment(Qt::AlignCenter);
        PY_Data->setReadOnly(true);

        gridLayout_7->addWidget(PY_Data, 1, 1, 1, 1);

        PYLabel = new QLabel(RPY);
        PYLabel->setObjectName(QString::fromUtf8("PYLabel"));
        sizePolicy1.setHeightForWidth(PYLabel->sizePolicy().hasHeightForWidth());
        PYLabel->setSizePolicy(sizePolicy1);
        PYLabel->setFont(font1);
        PYLabel->setLayoutDirection(Qt::LeftToRight);
        PYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        PYLabel->setFrameShape(QFrame::Box);
        PYLabel->setLineWidth(1);
        PYLabel->setTextFormat(Qt::AutoText);
        PYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(PYLabel, 0, 1, 1, 1);


        verticalLayout_6->addWidget(RPY);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);
        verticalLayout_6->setStretch(3, 1);
        verticalLayoutWidget_7 = new QWidget(Config);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(20, 420, 341, 181));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(true);

        verticalLayout_7->addWidget(label_7);

        LEFTMOTOR = new QGroupBox(verticalLayoutWidget_7);
        LEFTMOTOR->setObjectName(QString::fromUtf8("LEFTMOTOR"));
        sizePolicy3.setHeightForWidth(LEFTMOTOR->sizePolicy().hasHeightForWidth());
        LEFTMOTOR->setSizePolicy(sizePolicy3);
        LEFTMOTOR->setFont(font1);
        LEFTMOTOR->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        LEFTMOTOR->setAlignment(Qt::AlignCenter);
        gridLayout_10 = new QGridLayout(LEFTMOTOR);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(3, 3, 3, 3);
        LMPOW_POS = new QProgressBar(LEFTMOTOR);
        LMPOW_POS->setObjectName(QString::fromUtf8("LMPOW_POS"));
        sizePolicy3.setHeightForWidth(LMPOW_POS->sizePolicy().hasHeightForWidth());
        LMPOW_POS->setSizePolicy(sizePolicy3);
        LMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        LMPOW_POS->setMinimum(0);
        LMPOW_POS->setValue(0);
        LMPOW_POS->setTextVisible(false);
        LMPOW_POS->setOrientation(Qt::Horizontal);
        LMPOW_POS->setInvertedAppearance(false);
        LMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_10->addWidget(LMPOW_POS, 0, 1, 1, 1);

        LMPOW_NEG = new QProgressBar(LEFTMOTOR);
        LMPOW_NEG->setObjectName(QString::fromUtf8("LMPOW_NEG"));
        sizePolicy3.setHeightForWidth(LMPOW_NEG->sizePolicy().hasHeightForWidth());
        LMPOW_NEG->setSizePolicy(sizePolicy3);
        LMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        LMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        LMPOW_NEG->setMinimum(0);
        LMPOW_NEG->setValue(0);
        LMPOW_NEG->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LMPOW_NEG->setTextVisible(false);
        LMPOW_NEG->setOrientation(Qt::Horizontal);
        LMPOW_NEG->setInvertedAppearance(false);
        LMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_10->addWidget(LMPOW_NEG, 0, 0, 1, 1);


        verticalLayout_7->addWidget(LEFTMOTOR);

        RIGHTMOTOR = new QGroupBox(verticalLayoutWidget_7);
        RIGHTMOTOR->setObjectName(QString::fromUtf8("RIGHTMOTOR"));
        RIGHTMOTOR->setFont(font1);
        RIGHTMOTOR->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"Tahoma\";"));
        RIGHTMOTOR->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(RIGHTMOTOR);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        RMPOW_POS = new QProgressBar(RIGHTMOTOR);
        RMPOW_POS->setObjectName(QString::fromUtf8("RMPOW_POS"));
        RMPOW_POS->setEnabled(true);
        sizePolicy3.setHeightForWidth(RMPOW_POS->sizePolicy().hasHeightForWidth());
        RMPOW_POS->setSizePolicy(sizePolicy3);
        RMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        RMPOW_POS->setMinimum(0);
        RMPOW_POS->setValue(0);
        RMPOW_POS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RMPOW_POS->setTextVisible(false);
        RMPOW_POS->setOrientation(Qt::Horizontal);
        RMPOW_POS->setInvertedAppearance(false);
        RMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_11->addWidget(RMPOW_POS, 0, 1, 1, 1);

        RMPOW_NEG = new QProgressBar(RIGHTMOTOR);
        RMPOW_NEG->setObjectName(QString::fromUtf8("RMPOW_NEG"));
        sizePolicy3.setHeightForWidth(RMPOW_NEG->sizePolicy().hasHeightForWidth());
        RMPOW_NEG->setSizePolicy(sizePolicy3);
        RMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        RMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        RMPOW_NEG->setMinimum(0);
        RMPOW_NEG->setValue(0);
        RMPOW_NEG->setTextVisible(false);
        RMPOW_NEG->setOrientation(Qt::Horizontal);
        RMPOW_NEG->setInvertedAppearance(false);
        RMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_11->addWidget(RMPOW_NEG, 0, 0, 1, 1);


        verticalLayout_7->addWidget(RIGHTMOTOR);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 1);
        gridLayoutWidget = new QWidget(Config);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(380, 20, 391, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        none_label_5 = new QLineEdit(gridLayoutWidget);
        none_label_5->setObjectName(QString::fromUtf8("none_label_5"));
        sizePolicy3.setHeightForWidth(none_label_5->sizePolicy().hasHeightForWidth());
        none_label_5->setSizePolicy(sizePolicy3);
        none_label_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_5->setAlignment(Qt::AlignCenter);
        none_label_5->setReadOnly(true);

        gridLayout->addWidget(none_label_5, 4, 1, 1, 1);

        ir_4 = new QLineEdit(gridLayoutWidget);
        ir_4->setObjectName(QString::fromUtf8("ir_4"));
        sizePolicy3.setHeightForWidth(ir_4->sizePolicy().hasHeightForWidth());
        ir_4->setSizePolicy(sizePolicy3);
        ir_4->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_4->setAlignment(Qt::AlignCenter);
        ir_4->setReadOnly(true);

        gridLayout->addWidget(ir_4, 2, 1, 1, 1);

        none_label_3 = new QLineEdit(gridLayoutWidget);
        none_label_3->setObjectName(QString::fromUtf8("none_label_3"));
        sizePolicy3.setHeightForWidth(none_label_3->sizePolicy().hasHeightForWidth());
        none_label_3->setSizePolicy(sizePolicy3);
        none_label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_3->setAlignment(Qt::AlignCenter);
        none_label_3->setReadOnly(true);

        gridLayout->addWidget(none_label_3, 3, 1, 1, 1);

        ir_3 = new QLineEdit(gridLayoutWidget);
        ir_3->setObjectName(QString::fromUtf8("ir_3"));
        sizePolicy3.setHeightForWidth(ir_3->sizePolicy().hasHeightForWidth());
        ir_3->setSizePolicy(sizePolicy3);
        ir_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_3->setAlignment(Qt::AlignCenter);
        ir_3->setReadOnly(true);

        gridLayout->addWidget(ir_3, 3, 2, 1, 1);

        none_label_18 = new QLineEdit(gridLayoutWidget);
        none_label_18->setObjectName(QString::fromUtf8("none_label_18"));
        sizePolicy3.setHeightForWidth(none_label_18->sizePolicy().hasHeightForWidth());
        none_label_18->setSizePolicy(sizePolicy3);
        none_label_18->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_18->setAlignment(Qt::AlignCenter);
        none_label_18->setReadOnly(true);

        gridLayout->addWidget(none_label_18, 5, 2, 1, 1);

        none_label = new QLineEdit(gridLayoutWidget);
        none_label->setObjectName(QString::fromUtf8("none_label"));
        sizePolicy3.setHeightForWidth(none_label->sizePolicy().hasHeightForWidth());
        none_label->setSizePolicy(sizePolicy3);
        none_label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label->setAlignment(Qt::AlignCenter);
        none_label->setReadOnly(true);

        gridLayout->addWidget(none_label, 2, 0, 1, 1);

        none_label_16 = new QLineEdit(gridLayoutWidget);
        none_label_16->setObjectName(QString::fromUtf8("none_label_16"));
        sizePolicy3.setHeightForWidth(none_label_16->sizePolicy().hasHeightForWidth());
        none_label_16->setSizePolicy(sizePolicy3);
        none_label_16->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_16->setAlignment(Qt::AlignCenter);
        none_label_16->setReadOnly(true);

        gridLayout->addWidget(none_label_16, 7, 0, 1, 1);

        none_label_8 = new QLineEdit(gridLayoutWidget);
        none_label_8->setObjectName(QString::fromUtf8("none_label_8"));
        sizePolicy3.setHeightForWidth(none_label_8->sizePolicy().hasHeightForWidth());
        none_label_8->setSizePolicy(sizePolicy3);
        none_label_8->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_8->setAlignment(Qt::AlignCenter);
        none_label_8->setReadOnly(true);

        gridLayout->addWidget(none_label_8, 2, 2, 1, 1);

        none_label_19 = new QLineEdit(gridLayoutWidget);
        none_label_19->setObjectName(QString::fromUtf8("none_label_19"));
        sizePolicy3.setHeightForWidth(none_label_19->sizePolicy().hasHeightForWidth());
        none_label_19->setSizePolicy(sizePolicy3);
        none_label_19->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_19->setAlignment(Qt::AlignCenter);
        none_label_19->setReadOnly(true);

        gridLayout->addWidget(none_label_19, 6, 0, 1, 1);

        none_label_14 = new QLineEdit(gridLayoutWidget);
        none_label_14->setObjectName(QString::fromUtf8("none_label_14"));
        sizePolicy3.setHeightForWidth(none_label_14->sizePolicy().hasHeightForWidth());
        none_label_14->setSizePolicy(sizePolicy3);
        none_label_14->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_14->setAlignment(Qt::AlignCenter);
        none_label_14->setReadOnly(true);

        gridLayout->addWidget(none_label_14, 7, 4, 1, 1);

        ir_6 = new QLineEdit(gridLayoutWidget);
        ir_6->setObjectName(QString::fromUtf8("ir_6"));
        sizePolicy3.setHeightForWidth(ir_6->sizePolicy().hasHeightForWidth());
        ir_6->setSizePolicy(sizePolicy3);
        ir_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_6->setAlignment(Qt::AlignCenter);
        ir_6->setReadOnly(true);

        gridLayout->addWidget(ir_6, 5, 0, 1, 1);

        none_label_22 = new QLineEdit(gridLayoutWidget);
        none_label_22->setObjectName(QString::fromUtf8("none_label_22"));
        sizePolicy3.setHeightForWidth(none_label_22->sizePolicy().hasHeightForWidth());
        none_label_22->setSizePolicy(sizePolicy3);
        none_label_22->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_22->setAlignment(Qt::AlignCenter);
        none_label_22->setReadOnly(true);

        gridLayout->addWidget(none_label_22, 6, 3, 1, 1);

        none_label_2 = new QLineEdit(gridLayoutWidget);
        none_label_2->setObjectName(QString::fromUtf8("none_label_2"));
        sizePolicy3.setHeightForWidth(none_label_2->sizePolicy().hasHeightForWidth());
        none_label_2->setSizePolicy(sizePolicy3);
        none_label_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_2->setAlignment(Qt::AlignCenter);
        none_label_2->setReadOnly(true);

        gridLayout->addWidget(none_label_2, 2, 4, 1, 1);

        none_label_20 = new QLineEdit(gridLayoutWidget);
        none_label_20->setObjectName(QString::fromUtf8("none_label_20"));
        sizePolicy3.setHeightForWidth(none_label_20->sizePolicy().hasHeightForWidth());
        none_label_20->setSizePolicy(sizePolicy3);
        none_label_20->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_20->setAlignment(Qt::AlignCenter);
        none_label_20->setReadOnly(true);

        gridLayout->addWidget(none_label_20, 6, 1, 1, 1);

        none_label_23 = new QLineEdit(gridLayoutWidget);
        none_label_23->setObjectName(QString::fromUtf8("none_label_23"));
        sizePolicy3.setHeightForWidth(none_label_23->sizePolicy().hasHeightForWidth());
        none_label_23->setSizePolicy(sizePolicy3);
        none_label_23->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_23->setAlignment(Qt::AlignCenter);
        none_label_23->setReadOnly(true);

        gridLayout->addWidget(none_label_23, 6, 4, 1, 1);

        ir_0 = new QLineEdit(gridLayoutWidget);
        ir_0->setObjectName(QString::fromUtf8("ir_0"));
        sizePolicy3.setHeightForWidth(ir_0->sizePolicy().hasHeightForWidth());
        ir_0->setSizePolicy(sizePolicy3);
        ir_0->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_0->setAlignment(Qt::AlignCenter);
        ir_0->setReadOnly(true);

        gridLayout->addWidget(ir_0, 5, 4, 1, 1);

        none_label_6 = new QLineEdit(gridLayoutWidget);
        none_label_6->setObjectName(QString::fromUtf8("none_label_6"));
        sizePolicy3.setHeightForWidth(none_label_6->sizePolicy().hasHeightForWidth());
        none_label_6->setSizePolicy(sizePolicy3);
        none_label_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_6->setAlignment(Qt::AlignCenter);
        none_label_6->setReadOnly(true);

        gridLayout->addWidget(none_label_6, 4, 0, 1, 1);

        none_label_13 = new QLineEdit(gridLayoutWidget);
        none_label_13->setObjectName(QString::fromUtf8("none_label_13"));
        sizePolicy3.setHeightForWidth(none_label_13->sizePolicy().hasHeightForWidth());
        none_label_13->setSizePolicy(sizePolicy3);
        none_label_13->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_13->setAlignment(Qt::AlignCenter);
        none_label_13->setReadOnly(true);

        gridLayout->addWidget(none_label_13, 7, 1, 1, 1);

        none_label_21 = new QLineEdit(gridLayoutWidget);
        none_label_21->setObjectName(QString::fromUtf8("none_label_21"));
        sizePolicy3.setHeightForWidth(none_label_21->sizePolicy().hasHeightForWidth());
        none_label_21->setSizePolicy(sizePolicy3);
        none_label_21->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_21->setAlignment(Qt::AlignCenter);
        none_label_21->setReadOnly(true);

        gridLayout->addWidget(none_label_21, 6, 2, 1, 1);

        ir_7 = new QLineEdit(gridLayoutWidget);
        ir_7->setObjectName(QString::fromUtf8("ir_7"));
        sizePolicy3.setHeightForWidth(ir_7->sizePolicy().hasHeightForWidth());
        ir_7->setSizePolicy(sizePolicy3);
        ir_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_7->setAlignment(Qt::AlignCenter);
        ir_7->setReadOnly(true);

        gridLayout->addWidget(ir_7, 7, 2, 1, 1);

        none_label_12 = new QLineEdit(gridLayoutWidget);
        none_label_12->setObjectName(QString::fromUtf8("none_label_12"));
        sizePolicy3.setHeightForWidth(none_label_12->sizePolicy().hasHeightForWidth());
        none_label_12->setSizePolicy(sizePolicy3);
        none_label_12->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_12->setAlignment(Qt::AlignCenter);
        none_label_12->setReadOnly(true);

        gridLayout->addWidget(none_label_12, 5, 1, 1, 1);

        none_label_17 = new QLineEdit(gridLayoutWidget);
        none_label_17->setObjectName(QString::fromUtf8("none_label_17"));
        sizePolicy3.setHeightForWidth(none_label_17->sizePolicy().hasHeightForWidth());
        none_label_17->setSizePolicy(sizePolicy3);
        none_label_17->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_17->setAlignment(Qt::AlignCenter);
        none_label_17->setReadOnly(true);

        gridLayout->addWidget(none_label_17, 5, 3, 1, 1);

        ir_2 = new QLineEdit(gridLayoutWidget);
        ir_2->setObjectName(QString::fromUtf8("ir_2"));
        sizePolicy3.setHeightForWidth(ir_2->sizePolicy().hasHeightForWidth());
        ir_2->setSizePolicy(sizePolicy3);
        ir_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_2->setAlignment(Qt::AlignCenter);
        ir_2->setReadOnly(true);

        gridLayout->addWidget(ir_2, 2, 3, 1, 1);

        none_label_15 = new QLineEdit(gridLayoutWidget);
        none_label_15->setObjectName(QString::fromUtf8("none_label_15"));
        sizePolicy3.setHeightForWidth(none_label_15->sizePolicy().hasHeightForWidth());
        none_label_15->setSizePolicy(sizePolicy3);
        none_label_15->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_15->setAlignment(Qt::AlignCenter);
        none_label_15->setReadOnly(true);

        gridLayout->addWidget(none_label_15, 7, 3, 1, 1);

        none_label_9 = new QLineEdit(gridLayoutWidget);
        none_label_9->setObjectName(QString::fromUtf8("none_label_9"));
        sizePolicy3.setHeightForWidth(none_label_9->sizePolicy().hasHeightForWidth());
        none_label_9->setSizePolicy(sizePolicy3);
        none_label_9->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_9->setAlignment(Qt::AlignCenter);
        none_label_9->setReadOnly(true);

        gridLayout->addWidget(none_label_9, 4, 3, 1, 1);

        ir_1 = new QLineEdit(gridLayoutWidget);
        ir_1->setObjectName(QString::fromUtf8("ir_1"));
        sizePolicy3.setHeightForWidth(ir_1->sizePolicy().hasHeightForWidth());
        ir_1->setSizePolicy(sizePolicy3);
        ir_1->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_1->setAlignment(Qt::AlignCenter);
        ir_1->setReadOnly(true);

        gridLayout->addWidget(ir_1, 3, 4, 1, 1);

        none_label_10 = new QLineEdit(gridLayoutWidget);
        none_label_10->setObjectName(QString::fromUtf8("none_label_10"));
        sizePolicy3.setHeightForWidth(none_label_10->sizePolicy().hasHeightForWidth());
        none_label_10->setSizePolicy(sizePolicy3);
        none_label_10->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_10->setAlignment(Qt::AlignCenter);
        none_label_10->setReadOnly(true);

        gridLayout->addWidget(none_label_10, 4, 2, 1, 1);

        ir_5 = new QLineEdit(gridLayoutWidget);
        ir_5->setObjectName(QString::fromUtf8("ir_5"));
        sizePolicy3.setHeightForWidth(ir_5->sizePolicy().hasHeightForWidth());
        ir_5->setSizePolicy(sizePolicy3);
        ir_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        ir_5->setAlignment(Qt::AlignCenter);
        ir_5->setReadOnly(true);

        gridLayout->addWidget(ir_5, 3, 0, 1, 1);

        none_label_11 = new QLineEdit(gridLayoutWidget);
        none_label_11->setObjectName(QString::fromUtf8("none_label_11"));
        sizePolicy3.setHeightForWidth(none_label_11->sizePolicy().hasHeightForWidth());
        none_label_11->setSizePolicy(sizePolicy3);
        none_label_11->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_11->setAlignment(Qt::AlignCenter);
        none_label_11->setReadOnly(true);

        gridLayout->addWidget(none_label_11, 4, 4, 1, 1);

        none_label_7 = new QLineEdit(gridLayoutWidget);
        none_label_7->setObjectName(QString::fromUtf8("none_label_7"));
        sizePolicy3.setHeightForWidth(none_label_7->sizePolicy().hasHeightForWidth());
        none_label_7->setSizePolicy(sizePolicy3);
        none_label_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(150, 0, 0);"));
        none_label_7->setAlignment(Qt::AlignCenter);
        none_label_7->setReadOnly(true);

        gridLayout->addWidget(none_label_7, 3, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setWordWrap(true);

        gridLayout->addWidget(label_8, 1, 0, 1, 5);

        verticalLayoutWidget_9 = new QWidget(Config);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(790, 20, 371, 191));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setWordWrap(true);

        verticalLayout_9->addWidget(label_10);

        PID_NAV = new QGroupBox(verticalLayoutWidget_9);
        PID_NAV->setObjectName(QString::fromUtf8("PID_NAV"));
        sizePolicy2.setHeightForWidth(PID_NAV->sizePolicy().hasHeightForWidth());
        PID_NAV->setSizePolicy(sizePolicy2);
        PID_NAV->setFont(font1);
        PID_NAV->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(PID_NAV);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setHorizontalSpacing(2);
        gridLayout_12->setVerticalSpacing(0);
        gridLayout_12->setContentsMargins(3, 3, 3, 3);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        KI_NAV_Label = new QLabel(PID_NAV);
        KI_NAV_Label->setObjectName(QString::fromUtf8("KI_NAV_Label"));
        sizePolicy2.setHeightForWidth(KI_NAV_Label->sizePolicy().hasHeightForWidth());
        KI_NAV_Label->setSizePolicy(sizePolicy2);
        KI_NAV_Label->setFont(font1);
        KI_NAV_Label->setLayoutDirection(Qt::LeftToRight);
        KI_NAV_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KI_NAV_Label->setFrameShape(QFrame::Box);
        KI_NAV_Label->setLineWidth(1);
        KI_NAV_Label->setTextFormat(Qt::AutoText);
        KI_NAV_Label->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(KI_NAV_Label);

        KI_NAV_Data = new QLineEdit(PID_NAV);
        KI_NAV_Data->setObjectName(QString::fromUtf8("KI_NAV_Data"));
        sizePolicy3.setHeightForWidth(KI_NAV_Data->sizePolicy().hasHeightForWidth());
        KI_NAV_Data->setSizePolicy(sizePolicy3);
        KI_NAV_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KI_NAV_Data->setAlignment(Qt::AlignCenter);
        KI_NAV_Data->setReadOnly(true);

        verticalLayout_13->addWidget(KI_NAV_Data);


        gridLayout_12->addLayout(verticalLayout_13, 0, 1, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        KD_NAV_Label = new QLabel(PID_NAV);
        KD_NAV_Label->setObjectName(QString::fromUtf8("KD_NAV_Label"));
        sizePolicy2.setHeightForWidth(KD_NAV_Label->sizePolicy().hasHeightForWidth());
        KD_NAV_Label->setSizePolicy(sizePolicy2);
        KD_NAV_Label->setFont(font1);
        KD_NAV_Label->setLayoutDirection(Qt::LeftToRight);
        KD_NAV_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        KD_NAV_Label->setFrameShape(QFrame::Box);
        KD_NAV_Label->setLineWidth(1);
        KD_NAV_Label->setTextFormat(Qt::AutoText);
        KD_NAV_Label->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(KD_NAV_Label);

        KD_NAV_Data = new QLineEdit(PID_NAV);
        KD_NAV_Data->setObjectName(QString::fromUtf8("KD_NAV_Data"));
        sizePolicy3.setHeightForWidth(KD_NAV_Data->sizePolicy().hasHeightForWidth());
        KD_NAV_Data->setSizePolicy(sizePolicy3);
        KD_NAV_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KD_NAV_Data->setAlignment(Qt::AlignCenter);
        KD_NAV_Data->setReadOnly(true);

        verticalLayout_14->addWidget(KD_NAV_Data);


        gridLayout_12->addLayout(verticalLayout_14, 0, 2, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        KP_NAV_Label = new QLabel(PID_NAV);
        KP_NAV_Label->setObjectName(QString::fromUtf8("KP_NAV_Label"));
        sizePolicy2.setHeightForWidth(KP_NAV_Label->sizePolicy().hasHeightForWidth());
        KP_NAV_Label->setSizePolicy(sizePolicy2);
        KP_NAV_Label->setFont(font1);
        KP_NAV_Label->setLayoutDirection(Qt::LeftToRight);
        KP_NAV_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KP_NAV_Label->setFrameShape(QFrame::Box);
        KP_NAV_Label->setFrameShadow(QFrame::Plain);
        KP_NAV_Label->setLineWidth(1);
        KP_NAV_Label->setTextFormat(Qt::AutoText);
        KP_NAV_Label->setAlignment(Qt::AlignCenter);
        KP_NAV_Label->setWordWrap(false);

        verticalLayout_12->addWidget(KP_NAV_Label);

        KP_NAV_Data = new QLineEdit(PID_NAV);
        KP_NAV_Data->setObjectName(QString::fromUtf8("KP_NAV_Data"));
        sizePolicy3.setHeightForWidth(KP_NAV_Data->sizePolicy().hasHeightForWidth());
        KP_NAV_Data->setSizePolicy(sizePolicy3);
        KP_NAV_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KP_NAV_Data->setAlignment(Qt::AlignCenter);
        KP_NAV_Data->setReadOnly(true);

        verticalLayout_12->addWidget(KP_NAV_Data);


        gridLayout_12->addLayout(verticalLayout_12, 0, 0, 1, 1);


        verticalLayout_9->addWidget(PID_NAV);

        PID_NAV_2 = new QGroupBox(verticalLayoutWidget_9);
        PID_NAV_2->setObjectName(QString::fromUtf8("PID_NAV_2"));
        sizePolicy2.setHeightForWidth(PID_NAV_2->sizePolicy().hasHeightForWidth());
        PID_NAV_2->setSizePolicy(sizePolicy2);
        PID_NAV_2->setFont(font1);
        PID_NAV_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV_2->setAlignment(Qt::AlignCenter);
        gridLayout_13 = new QGridLayout(PID_NAV_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setHorizontalSpacing(2);
        gridLayout_13->setVerticalSpacing(0);
        gridLayout_13->setContentsMargins(3, 3, 3, 3);
        Base_NAV_Label = new QLabel(PID_NAV_2);
        Base_NAV_Label->setObjectName(QString::fromUtf8("Base_NAV_Label"));
        sizePolicy2.setHeightForWidth(Base_NAV_Label->sizePolicy().hasHeightForWidth());
        Base_NAV_Label->setSizePolicy(sizePolicy2);
        Base_NAV_Label->setFont(font1);
        Base_NAV_Label->setLayoutDirection(Qt::LeftToRight);
        Base_NAV_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        Base_NAV_Label->setFrameShape(QFrame::Box);
        Base_NAV_Label->setLineWidth(1);
        Base_NAV_Label->setTextFormat(Qt::AutoText);
        Base_NAV_Label->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(Base_NAV_Label, 0, 1, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        PWM_NAV_Data = new QLineEdit(PID_NAV_2);
        PWM_NAV_Data->setObjectName(QString::fromUtf8("PWM_NAV_Data"));
        sizePolicy3.setHeightForWidth(PWM_NAV_Data->sizePolicy().hasHeightForWidth());
        PWM_NAV_Data->setSizePolicy(sizePolicy3);
        PWM_NAV_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        PWM_NAV_Data->setAlignment(Qt::AlignCenter);
        PWM_NAV_Data->setReadOnly(true);

        verticalLayout_19->addWidget(PWM_NAV_Data);


        gridLayout_13->addLayout(verticalLayout_19, 1, 0, 1, 1);

        PWM_NAV_Label = new QLabel(PID_NAV_2);
        PWM_NAV_Label->setObjectName(QString::fromUtf8("PWM_NAV_Label"));
        sizePolicy2.setHeightForWidth(PWM_NAV_Label->sizePolicy().hasHeightForWidth());
        PWM_NAV_Label->setSizePolicy(sizePolicy2);
        PWM_NAV_Label->setFont(font1);
        PWM_NAV_Label->setLayoutDirection(Qt::LeftToRight);
        PWM_NAV_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PWM_NAV_Label->setFrameShape(QFrame::Box);
        PWM_NAV_Label->setLineWidth(1);
        PWM_NAV_Label->setTextFormat(Qt::AutoText);
        PWM_NAV_Label->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(PWM_NAV_Label, 0, 0, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        Base_NAV_Data = new QLineEdit(PID_NAV_2);
        Base_NAV_Data->setObjectName(QString::fromUtf8("Base_NAV_Data"));
        sizePolicy3.setHeightForWidth(Base_NAV_Data->sizePolicy().hasHeightForWidth());
        Base_NAV_Data->setSizePolicy(sizePolicy3);
        Base_NAV_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        Base_NAV_Data->setAlignment(Qt::AlignCenter);
        Base_NAV_Data->setReadOnly(true);

        verticalLayout_15->addWidget(Base_NAV_Data);


        gridLayout_13->addLayout(verticalLayout_15, 1, 1, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));

        gridLayout_13->addLayout(verticalLayout_18, 1, 2, 1, 1);


        verticalLayout_9->addWidget(PID_NAV_2);

        verticalLayoutWidget_10 = new QWidget(Config);
        verticalLayoutWidget_10->setObjectName(QString::fromUtf8("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(790, 220, 371, 191));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_11->setFrameShape(QFrame::NoFrame);
        label_11->setFrameShadow(QFrame::Plain);
        label_11->setAlignment(Qt::AlignCenter);
        label_11->setWordWrap(true);

        verticalLayout_10->addWidget(label_11);

        PID_NAV_3 = new QGroupBox(verticalLayoutWidget_10);
        PID_NAV_3->setObjectName(QString::fromUtf8("PID_NAV_3"));
        sizePolicy2.setHeightForWidth(PID_NAV_3->sizePolicy().hasHeightForWidth());
        PID_NAV_3->setSizePolicy(sizePolicy2);
        PID_NAV_3->setFont(font1);
        PID_NAV_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV_3->setAlignment(Qt::AlignCenter);
        gridLayout_14 = new QGridLayout(PID_NAV_3);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setHorizontalSpacing(2);
        gridLayout_14->setVerticalSpacing(0);
        gridLayout_14->setContentsMargins(3, 3, 3, 3);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        KI_NAV_Label_2 = new QLabel(PID_NAV_3);
        KI_NAV_Label_2->setObjectName(QString::fromUtf8("KI_NAV_Label_2"));
        sizePolicy2.setHeightForWidth(KI_NAV_Label_2->sizePolicy().hasHeightForWidth());
        KI_NAV_Label_2->setSizePolicy(sizePolicy2);
        KI_NAV_Label_2->setFont(font1);
        KI_NAV_Label_2->setLayoutDirection(Qt::LeftToRight);
        KI_NAV_Label_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KI_NAV_Label_2->setFrameShape(QFrame::Box);
        KI_NAV_Label_2->setLineWidth(1);
        KI_NAV_Label_2->setTextFormat(Qt::AutoText);
        KI_NAV_Label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(KI_NAV_Label_2);

        KI_UT_Data = new QLineEdit(PID_NAV_3);
        KI_UT_Data->setObjectName(QString::fromUtf8("KI_UT_Data"));
        sizePolicy3.setHeightForWidth(KI_UT_Data->sizePolicy().hasHeightForWidth());
        KI_UT_Data->setSizePolicy(sizePolicy3);
        KI_UT_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KI_UT_Data->setAlignment(Qt::AlignCenter);
        KI_UT_Data->setReadOnly(true);

        verticalLayout_16->addWidget(KI_UT_Data);


        gridLayout_14->addLayout(verticalLayout_16, 0, 1, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        KD_NAV_Label_2 = new QLabel(PID_NAV_3);
        KD_NAV_Label_2->setObjectName(QString::fromUtf8("KD_NAV_Label_2"));
        sizePolicy2.setHeightForWidth(KD_NAV_Label_2->sizePolicy().hasHeightForWidth());
        KD_NAV_Label_2->setSizePolicy(sizePolicy2);
        KD_NAV_Label_2->setFont(font1);
        KD_NAV_Label_2->setLayoutDirection(Qt::LeftToRight);
        KD_NAV_Label_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        KD_NAV_Label_2->setFrameShape(QFrame::Box);
        KD_NAV_Label_2->setLineWidth(1);
        KD_NAV_Label_2->setTextFormat(Qt::AutoText);
        KD_NAV_Label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(KD_NAV_Label_2);

        KD_UT_Data = new QLineEdit(PID_NAV_3);
        KD_UT_Data->setObjectName(QString::fromUtf8("KD_UT_Data"));
        sizePolicy3.setHeightForWidth(KD_UT_Data->sizePolicy().hasHeightForWidth());
        KD_UT_Data->setSizePolicy(sizePolicy3);
        KD_UT_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KD_UT_Data->setAlignment(Qt::AlignCenter);
        KD_UT_Data->setReadOnly(true);

        verticalLayout_17->addWidget(KD_UT_Data);


        gridLayout_14->addLayout(verticalLayout_17, 0, 2, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        KP_UT_Label = new QLabel(PID_NAV_3);
        KP_UT_Label->setObjectName(QString::fromUtf8("KP_UT_Label"));
        sizePolicy2.setHeightForWidth(KP_UT_Label->sizePolicy().hasHeightForWidth());
        KP_UT_Label->setSizePolicy(sizePolicy2);
        KP_UT_Label->setFont(font1);
        KP_UT_Label->setLayoutDirection(Qt::LeftToRight);
        KP_UT_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KP_UT_Label->setFrameShape(QFrame::Box);
        KP_UT_Label->setFrameShadow(QFrame::Plain);
        KP_UT_Label->setLineWidth(1);
        KP_UT_Label->setTextFormat(Qt::AutoText);
        KP_UT_Label->setAlignment(Qt::AlignCenter);
        KP_UT_Label->setWordWrap(false);

        verticalLayout_20->addWidget(KP_UT_Label);

        KP_UT_Data = new QLineEdit(PID_NAV_3);
        KP_UT_Data->setObjectName(QString::fromUtf8("KP_UT_Data"));
        sizePolicy3.setHeightForWidth(KP_UT_Data->sizePolicy().hasHeightForWidth());
        KP_UT_Data->setSizePolicy(sizePolicy3);
        KP_UT_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KP_UT_Data->setAlignment(Qt::AlignCenter);
        KP_UT_Data->setReadOnly(true);

        verticalLayout_20->addWidget(KP_UT_Data);


        gridLayout_14->addLayout(verticalLayout_20, 0, 0, 1, 1);


        verticalLayout_10->addWidget(PID_NAV_3);

        PID_NAV_4 = new QGroupBox(verticalLayoutWidget_10);
        PID_NAV_4->setObjectName(QString::fromUtf8("PID_NAV_4"));
        sizePolicy2.setHeightForWidth(PID_NAV_4->sizePolicy().hasHeightForWidth());
        PID_NAV_4->setSizePolicy(sizePolicy2);
        PID_NAV_4->setFont(font1);
        PID_NAV_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV_4->setAlignment(Qt::AlignCenter);
        gridLayout_15 = new QGridLayout(PID_NAV_4);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setHorizontalSpacing(2);
        gridLayout_15->setVerticalSpacing(0);
        gridLayout_15->setContentsMargins(3, 3, 3, 3);
        Base_NAV_Label_2 = new QLabel(PID_NAV_4);
        Base_NAV_Label_2->setObjectName(QString::fromUtf8("Base_NAV_Label_2"));
        sizePolicy1.setHeightForWidth(Base_NAV_Label_2->sizePolicy().hasHeightForWidth());
        Base_NAV_Label_2->setSizePolicy(sizePolicy1);
        Base_NAV_Label_2->setFont(font1);
        Base_NAV_Label_2->setLayoutDirection(Qt::LeftToRight);
        Base_NAV_Label_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        Base_NAV_Label_2->setFrameShape(QFrame::Box);
        Base_NAV_Label_2->setLineWidth(1);
        Base_NAV_Label_2->setTextFormat(Qt::AutoText);
        Base_NAV_Label_2->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(Base_NAV_Label_2, 0, 1, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        PWM_UT_Data = new QLineEdit(PID_NAV_4);
        PWM_UT_Data->setObjectName(QString::fromUtf8("PWM_UT_Data"));
        sizePolicy3.setHeightForWidth(PWM_UT_Data->sizePolicy().hasHeightForWidth());
        PWM_UT_Data->setSizePolicy(sizePolicy3);
        PWM_UT_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        PWM_UT_Data->setAlignment(Qt::AlignCenter);
        PWM_UT_Data->setReadOnly(true);

        verticalLayout_21->addWidget(PWM_UT_Data);


        gridLayout_15->addLayout(verticalLayout_21, 1, 0, 1, 1);

        PWM_NAV_Label_2 = new QLabel(PID_NAV_4);
        PWM_NAV_Label_2->setObjectName(QString::fromUtf8("PWM_NAV_Label_2"));
        sizePolicy1.setHeightForWidth(PWM_NAV_Label_2->sizePolicy().hasHeightForWidth());
        PWM_NAV_Label_2->setSizePolicy(sizePolicy1);
        PWM_NAV_Label_2->setFont(font1);
        PWM_NAV_Label_2->setLayoutDirection(Qt::LeftToRight);
        PWM_NAV_Label_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PWM_NAV_Label_2->setFrameShape(QFrame::Box);
        PWM_NAV_Label_2->setLineWidth(1);
        PWM_NAV_Label_2->setTextFormat(Qt::AutoText);
        PWM_NAV_Label_2->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(PWM_NAV_Label_2, 0, 0, 1, 1);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        Base_UT_Data = new QLineEdit(PID_NAV_4);
        Base_UT_Data->setObjectName(QString::fromUtf8("Base_UT_Data"));
        sizePolicy3.setHeightForWidth(Base_UT_Data->sizePolicy().hasHeightForWidth());
        Base_UT_Data->setSizePolicy(sizePolicy3);
        Base_UT_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        Base_UT_Data->setAlignment(Qt::AlignCenter);
        Base_UT_Data->setReadOnly(true);

        verticalLayout_22->addWidget(Base_UT_Data);


        gridLayout_15->addLayout(verticalLayout_22, 1, 1, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));

        gridLayout_15->addLayout(verticalLayout_23, 1, 2, 1, 1);


        verticalLayout_10->addWidget(PID_NAV_4);

        verticalLayoutWidget_11 = new QWidget(Config);
        verticalLayoutWidget_11->setObjectName(QString::fromUtf8("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(790, 420, 371, 189));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_11);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_12->setFrameShape(QFrame::NoFrame);
        label_12->setFrameShadow(QFrame::Plain);
        label_12->setAlignment(Qt::AlignCenter);
        label_12->setWordWrap(true);

        verticalLayout_11->addWidget(label_12);

        PID_NAV_5 = new QGroupBox(verticalLayoutWidget_11);
        PID_NAV_5->setObjectName(QString::fromUtf8("PID_NAV_5"));
        sizePolicy2.setHeightForWidth(PID_NAV_5->sizePolicy().hasHeightForWidth());
        PID_NAV_5->setSizePolicy(sizePolicy2);
        PID_NAV_5->setFont(font1);
        PID_NAV_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV_5->setAlignment(Qt::AlignCenter);
        gridLayout_16 = new QGridLayout(PID_NAV_5);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setHorizontalSpacing(2);
        gridLayout_16->setVerticalSpacing(0);
        gridLayout_16->setContentsMargins(3, 3, 3, 3);
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        KI_NAV_Label_3 = new QLabel(PID_NAV_5);
        KI_NAV_Label_3->setObjectName(QString::fromUtf8("KI_NAV_Label_3"));
        sizePolicy2.setHeightForWidth(KI_NAV_Label_3->sizePolicy().hasHeightForWidth());
        KI_NAV_Label_3->setSizePolicy(sizePolicy2);
        KI_NAV_Label_3->setFont(font1);
        KI_NAV_Label_3->setLayoutDirection(Qt::LeftToRight);
        KI_NAV_Label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KI_NAV_Label_3->setFrameShape(QFrame::Box);
        KI_NAV_Label_3->setLineWidth(1);
        KI_NAV_Label_3->setTextFormat(Qt::AutoText);
        KI_NAV_Label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(KI_NAV_Label_3);

        KI_TURN_Data = new QLineEdit(PID_NAV_5);
        KI_TURN_Data->setObjectName(QString::fromUtf8("KI_TURN_Data"));
        sizePolicy3.setHeightForWidth(KI_TURN_Data->sizePolicy().hasHeightForWidth());
        KI_TURN_Data->setSizePolicy(sizePolicy3);
        KI_TURN_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KI_TURN_Data->setAlignment(Qt::AlignCenter);
        KI_TURN_Data->setReadOnly(true);

        verticalLayout_24->addWidget(KI_TURN_Data);


        gridLayout_16->addLayout(verticalLayout_24, 0, 1, 1, 1);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        KD_NAV_Label_3 = new QLabel(PID_NAV_5);
        KD_NAV_Label_3->setObjectName(QString::fromUtf8("KD_NAV_Label_3"));
        sizePolicy2.setHeightForWidth(KD_NAV_Label_3->sizePolicy().hasHeightForWidth());
        KD_NAV_Label_3->setSizePolicy(sizePolicy2);
        KD_NAV_Label_3->setFont(font1);
        KD_NAV_Label_3->setLayoutDirection(Qt::LeftToRight);
        KD_NAV_Label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        KD_NAV_Label_3->setFrameShape(QFrame::Box);
        KD_NAV_Label_3->setLineWidth(1);
        KD_NAV_Label_3->setTextFormat(Qt::AutoText);
        KD_NAV_Label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(KD_NAV_Label_3);

        KD_TURN_Data = new QLineEdit(PID_NAV_5);
        KD_TURN_Data->setObjectName(QString::fromUtf8("KD_TURN_Data"));
        sizePolicy3.setHeightForWidth(KD_TURN_Data->sizePolicy().hasHeightForWidth());
        KD_TURN_Data->setSizePolicy(sizePolicy3);
        KD_TURN_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KD_TURN_Data->setAlignment(Qt::AlignCenter);
        KD_TURN_Data->setReadOnly(true);

        verticalLayout_25->addWidget(KD_TURN_Data);


        gridLayout_16->addLayout(verticalLayout_25, 0, 2, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        KP_NAV_Label_3 = new QLabel(PID_NAV_5);
        KP_NAV_Label_3->setObjectName(QString::fromUtf8("KP_NAV_Label_3"));
        sizePolicy2.setHeightForWidth(KP_NAV_Label_3->sizePolicy().hasHeightForWidth());
        KP_NAV_Label_3->setSizePolicy(sizePolicy2);
        KP_NAV_Label_3->setFont(font1);
        KP_NAV_Label_3->setLayoutDirection(Qt::LeftToRight);
        KP_NAV_Label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        KP_NAV_Label_3->setFrameShape(QFrame::Box);
        KP_NAV_Label_3->setFrameShadow(QFrame::Plain);
        KP_NAV_Label_3->setLineWidth(1);
        KP_NAV_Label_3->setTextFormat(Qt::AutoText);
        KP_NAV_Label_3->setAlignment(Qt::AlignCenter);
        KP_NAV_Label_3->setWordWrap(false);

        verticalLayout_26->addWidget(KP_NAV_Label_3);

        KP_TURN_Data = new QLineEdit(PID_NAV_5);
        KP_TURN_Data->setObjectName(QString::fromUtf8("KP_TURN_Data"));
        sizePolicy3.setHeightForWidth(KP_TURN_Data->sizePolicy().hasHeightForWidth());
        KP_TURN_Data->setSizePolicy(sizePolicy3);
        KP_TURN_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        KP_TURN_Data->setAlignment(Qt::AlignCenter);
        KP_TURN_Data->setReadOnly(true);

        verticalLayout_26->addWidget(KP_TURN_Data);


        gridLayout_16->addLayout(verticalLayout_26, 0, 0, 1, 1);


        verticalLayout_11->addWidget(PID_NAV_5);

        PID_NAV_6 = new QGroupBox(verticalLayoutWidget_11);
        PID_NAV_6->setObjectName(QString::fromUtf8("PID_NAV_6"));
        sizePolicy2.setHeightForWidth(PID_NAV_6->sizePolicy().hasHeightForWidth());
        PID_NAV_6->setSizePolicy(sizePolicy2);
        PID_NAV_6->setFont(font1);
        PID_NAV_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Tahoma\";\n"
"color: rgb(255, 255, 255);"));
        PID_NAV_6->setAlignment(Qt::AlignCenter);
        gridLayout_17 = new QGridLayout(PID_NAV_6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(2);
        gridLayout_17->setVerticalSpacing(0);
        gridLayout_17->setContentsMargins(3, 3, 3, 3);
        Base_NAV_Label_3 = new QLabel(PID_NAV_6);
        Base_NAV_Label_3->setObjectName(QString::fromUtf8("Base_NAV_Label_3"));
        sizePolicy2.setHeightForWidth(Base_NAV_Label_3->sizePolicy().hasHeightForWidth());
        Base_NAV_Label_3->setSizePolicy(sizePolicy2);
        Base_NAV_Label_3->setFont(font1);
        Base_NAV_Label_3->setLayoutDirection(Qt::LeftToRight);
        Base_NAV_Label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        Base_NAV_Label_3->setFrameShape(QFrame::Box);
        Base_NAV_Label_3->setLineWidth(1);
        Base_NAV_Label_3->setTextFormat(Qt::AutoText);
        Base_NAV_Label_3->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(Base_NAV_Label_3, 0, 1, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        PWM_TURN_Data = new QLineEdit(PID_NAV_6);
        PWM_TURN_Data->setObjectName(QString::fromUtf8("PWM_TURN_Data"));
        sizePolicy3.setHeightForWidth(PWM_TURN_Data->sizePolicy().hasHeightForWidth());
        PWM_TURN_Data->setSizePolicy(sizePolicy3);
        PWM_TURN_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        PWM_TURN_Data->setAlignment(Qt::AlignCenter);
        PWM_TURN_Data->setReadOnly(true);

        verticalLayout_27->addWidget(PWM_TURN_Data);


        gridLayout_17->addLayout(verticalLayout_27, 1, 0, 1, 1);

        PWM_NAV_Label_3 = new QLabel(PID_NAV_6);
        PWM_NAV_Label_3->setObjectName(QString::fromUtf8("PWM_NAV_Label_3"));
        sizePolicy2.setHeightForWidth(PWM_NAV_Label_3->sizePolicy().hasHeightForWidth());
        PWM_NAV_Label_3->setSizePolicy(sizePolicy2);
        PWM_NAV_Label_3->setFont(font1);
        PWM_NAV_Label_3->setLayoutDirection(Qt::LeftToRight);
        PWM_NAV_Label_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PWM_NAV_Label_3->setFrameShape(QFrame::Box);
        PWM_NAV_Label_3->setLineWidth(1);
        PWM_NAV_Label_3->setTextFormat(Qt::AutoText);
        PWM_NAV_Label_3->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(PWM_NAV_Label_3, 0, 0, 1, 1);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        Base_TURN_Data = new QLineEdit(PID_NAV_6);
        Base_TURN_Data->setObjectName(QString::fromUtf8("Base_TURN_Data"));
        sizePolicy3.setHeightForWidth(Base_TURN_Data->sizePolicy().hasHeightForWidth());
        Base_TURN_Data->setSizePolicy(sizePolicy3);
        Base_TURN_Data->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);"));
        Base_TURN_Data->setAlignment(Qt::AlignCenter);
        Base_TURN_Data->setReadOnly(true);

        verticalLayout_28->addWidget(Base_TURN_Data);


        gridLayout_17->addLayout(verticalLayout_28, 1, 1, 1, 1);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));

        gridLayout_17->addLayout(verticalLayout_29, 1, 2, 1, 1);


        verticalLayout_11->addWidget(PID_NAV_6);

        stackedWidget->addWidget(Config);
        CommData = new QWidget();
        CommData->setObjectName(QString::fromUtf8("CommData"));
        CommData->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);"));
        verticalLayoutWidget = new QWidget(CommData);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 200, 271, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        comboBox_PORTS = new QComboBox(verticalLayoutWidget);
        comboBox_PORTS->setObjectName(QString::fromUtf8("comboBox_PORTS"));
        sizePolicy2.setHeightForWidth(comboBox_PORTS->sizePolicy().hasHeightForWidth());
        comboBox_PORTS->setSizePolicy(sizePolicy2);
        comboBox_PORTS->setFocusPolicy(Qt::NoFocus);
        comboBox_PORTS->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(80, 0, 0);\n"
"font: 500 12pt \"Tahoma\";"));
        comboBox_PORTS->setCurrentText(QString::fromUtf8(""));
        comboBox_PORTS->setFrame(false);

        verticalLayout->addWidget(comboBox_PORTS);

        Connect_USB = new QPushButton(verticalLayoutWidget);
        Connect_USB->setObjectName(QString::fromUtf8("Connect_USB"));
        sizePolicy2.setHeightForWidth(Connect_USB->sizePolicy().hasHeightForWidth());
        Connect_USB->setSizePolicy(sizePolicy2);
        Connect_USB->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Tahoma\";"));

        verticalLayout->addWidget(Connect_USB);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayoutWidget_2 = new QWidget(CommData);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 271, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(verticalLayoutWidget_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy3.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy3);
        comboBox_2->setFocusPolicy(Qt::NoFocus);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(80, 0, 0);\n"
"font: 500 12pt \"Tahoma\";"));
        comboBox_2->setCurrentText(QString::fromUtf8(""));
        comboBox_2->setFrame(false);

        verticalLayout_2->addWidget(comboBox_2);

        SendCMD_Button = new QPushButton(verticalLayoutWidget_2);
        SendCMD_Button->setObjectName(QString::fromUtf8("SendCMD_Button"));
        sizePolicy2.setHeightForWidth(SendCMD_Button->sizePolicy().hasHeightForWidth());
        SendCMD_Button->setSizePolicy(sizePolicy2);
        SendCMD_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Tahoma\";"));

        verticalLayout_2->addWidget(SendCMD_Button);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        verticalLayoutWidget_3 = new QWidget(CommData);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(310, 20, 851, 571));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        Comandos_CMD = new QPlainTextEdit(verticalLayoutWidget_3);
        Comandos_CMD->setObjectName(QString::fromUtf8("Comandos_CMD"));
        sizePolicy2.setHeightForWidth(Comandos_CMD->sizePolicy().hasHeightForWidth());
        Comandos_CMD->setSizePolicy(sizePolicy2);
        Comandos_CMD->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(80, 0, 0);\n"
"font: 500 10pt \"Tahoma\";"));

        verticalLayout_3->addWidget(Comandos_CMD);

        LimpiarCMD_Button = new QPushButton(verticalLayoutWidget_3);
        LimpiarCMD_Button->setObjectName(QString::fromUtf8("LimpiarCMD_Button"));
        sizePolicy2.setHeightForWidth(LimpiarCMD_Button->sizePolicy().hasHeightForWidth());
        LimpiarCMD_Button->setSizePolicy(sizePolicy2);
        LimpiarCMD_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Tahoma\";"));

        verticalLayout_3->addWidget(LimpiarCMD_Button);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 9);
        verticalLayout_3->setStretch(2, 1);
        verticalLayoutWidget_4 = new QWidget(CommData);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 370, 271, 221));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(verticalLayoutWidget_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy3.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy3);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(80, 0, 0);\n"
"font: 500 12pt \"Tahoma\";"));

        horizontalLayout->addWidget(lineEdit);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_4->addLayout(horizontalLayout);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy3.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy3);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
"color: rgb(150, 0, 0);\n"
"font: 12pt \"Tahoma\";"));
        lineEdit_2->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_2);

        Connect_WIFI_Button = new QPushButton(verticalLayoutWidget_4);
        Connect_WIFI_Button->setObjectName(QString::fromUtf8("Connect_WIFI_Button"));
        sizePolicy2.setHeightForWidth(Connect_WIFI_Button->sizePolicy().hasHeightForWidth());
        Connect_WIFI_Button->setSizePolicy(sizePolicy2);
        Connect_WIFI_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 10pt \"Tahoma\";"));

        verticalLayout_4->addWidget(Connect_WIFI_Button);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);
        verticalLayout_4->setStretch(3, 1);
        stackedWidget->addWidget(CommData);
        Graph = new QWidget();
        Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);"));
        verticalLayoutWidget_8 = new QWidget(Graph);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(20, 20, 401, 431));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Tahoma\";"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(true);

        verticalLayout_8->addWidget(label_9);

        positionRadar = new QWidget(verticalLayoutWidget_8);
        positionRadar->setObjectName(QString::fromUtf8("positionRadar"));
        sizePolicy2.setHeightForWidth(positionRadar->sizePolicy().hasHeightForWidth());
        positionRadar->setSizePolicy(sizePolicy2);
        positionRadar->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);"));

        verticalLayout_8->addWidget(positionRadar);

        stackedWidget->addWidget(Graph);
        Home_Button = new QPushButton(centralwidget);
        Home_Button->setObjectName(QString::fromUtf8("Home_Button"));
        Home_Button->setEnabled(true);
        Home_Button->setGeometry(QRect(10, 10, 180, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setKerning(true);
        Home_Button->setFont(font2);
        Home_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(80, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: rgb(150, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"}"));
        Home_Button->setCheckable(true);
        Home_Button->setChecked(true);
        Home_Button->setAutoDefault(false);
        Home_Button->setFlat(false);
        Data_Button = new QPushButton(centralwidget);
        Data_Button->setObjectName(QString::fromUtf8("Data_Button"));
        Data_Button->setGeometry(QRect(200, 10, 180, 50));
        Data_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(80, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: rgb(150, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"}"));
        Data_Button->setCheckable(true);
        Data_Button->setFlat(false);
        Comm_Button = new QPushButton(centralwidget);
        Comm_Button->setObjectName(QString::fromUtf8("Comm_Button"));
        Comm_Button->setGeometry(QRect(390, 10, 180, 50));
        Comm_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(80, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: rgb(150, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"}"));
        Comm_Button->setCheckable(true);
        Comm_Button->setFlat(false);
        Graph_Button = new QPushButton(centralwidget);
        Graph_Button->setObjectName(QString::fromUtf8("Graph_Button"));
        Graph_Button->setGeometry(QRect(580, 10, 180, 50));
        Graph_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(80, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 14pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"	background-color: rgb(150, 0, 0);\n"
"	border-color: rgb(255, 0, 0);\n"
"}"));
        Graph_Button->setCheckable(true);
        Graph_Button->setFlat(false);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(930, 10, 261, 51));
        QFont font3;
        font3.setKerning(false);
        label_14->setFont(font3);
        label_14->setAutoFillBackground(false);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label_14->setFrameShape(QFrame::NoFrame);
        label_14->setFrameShadow(QFrame::Plain);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/uner.png")));
        label_14->setScaledContents(true);
        label_14->setWordWrap(false);
        label_14->setTextInteractionFlags(Qt::NoTextInteraction);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        comboBox_PORTS->setCurrentIndex(-1);
        comboBox_2->setCurrentIndex(-1);
        Home_Button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Proyecto Microcontroladores: HMI", nullptr));
        label_13->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "ESTADO DEL AUTO", nullptr));
        VELOCITY_2->setTitle(QCoreApplication::translate("MainWindow", "ALIVE", nullptr));
        AliveLabel->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
        VELOCITY->setTitle(QCoreApplication::translate("MainWindow", "MODO", nullptr));
        startModeButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        EstadoBotonLabel->setText(QCoreApplication::translate("MainWindow", "IDLE", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MPU6050", nullptr));
        ACCELERATION->setTitle(QString());
        AXLabel->setText(QCoreApplication::translate("MainWindow", "ACC (X)", nullptr));
        AZ_Data->setText(QString());
        AZLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Z)", nullptr));
        AYLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Y)", nullptr));
        GYRO->setTitle(QString());
        GXLabel->setText(QCoreApplication::translate("MainWindow", "GYR (X)", nullptr));
        GYLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Y)", nullptr));
        GZLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Z)", nullptr));
        GZ_Data->setText(QString());
        RPY->setTitle(QString());
        YAWData->setText(QCoreApplication::translate("MainWindow", "YAW", nullptr));
        Yaw_Data->setText(QString());
        PXLabel->setText(QCoreApplication::translate("MainWindow", "POS (X)", nullptr));
        PYLabel->setText(QCoreApplication::translate("MainWindow", "POS (Y)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "MOTORES N20", nullptr));
        LEFTMOTOR->setTitle(QCoreApplication::translate("MainWindow", "MOTOR IZQUIERDO", nullptr));
        LMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        LMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RIGHTMOTOR->setTitle(QCoreApplication::translate("MainWindow", "MOTOR DERECHO", nullptr));
        RMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "SENSORES INFRARROJOS", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "PID NAVEGACION", nullptr));
        PID_NAV->setTitle(QString());
        KI_NAV_Label->setText(QCoreApplication::translate("MainWindow", "KI", nullptr));
        KI_NAV_Data->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        KD_NAV_Label->setText(QCoreApplication::translate("MainWindow", "KD", nullptr));
        KD_NAV_Data->setText(QCoreApplication::translate("MainWindow", "80", nullptr));
        KP_NAV_Label->setText(QCoreApplication::translate("MainWindow", "KP", nullptr));
        KP_NAV_Data->setText(QCoreApplication::translate("MainWindow", "60", nullptr));
        PID_NAV_2->setTitle(QString());
        Base_NAV_Label->setText(QCoreApplication::translate("MainWindow", "VEL. BASE (%)", nullptr));
        PWM_NAV_Data->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        PWM_NAV_Label->setText(QCoreApplication::translate("MainWindow", "PWM MAX (%)", nullptr));
        Base_NAV_Data->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "PID GIRO EN U", nullptr));
        PID_NAV_3->setTitle(QString());
        KI_NAV_Label_2->setText(QCoreApplication::translate("MainWindow", "KI", nullptr));
        KI_UT_Data->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        KD_NAV_Label_2->setText(QCoreApplication::translate("MainWindow", "KD", nullptr));
        KD_UT_Data->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        KP_UT_Label->setText(QCoreApplication::translate("MainWindow", "KP", nullptr));
        KP_UT_Data->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        PID_NAV_4->setTitle(QString());
        Base_NAV_Label_2->setText(QCoreApplication::translate("MainWindow", "VEL. BASE (%)", nullptr));
        PWM_UT_Data->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
        PWM_NAV_Label_2->setText(QCoreApplication::translate("MainWindow", "PWM MAX (%)", nullptr));
        Base_UT_Data->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "PID GIRO", nullptr));
        PID_NAV_5->setTitle(QString());
        KI_NAV_Label_3->setText(QCoreApplication::translate("MainWindow", "KI", nullptr));
        KI_TURN_Data->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        KD_NAV_Label_3->setText(QCoreApplication::translate("MainWindow", "KD", nullptr));
        KD_TURN_Data->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        KP_NAV_Label_3->setText(QCoreApplication::translate("MainWindow", "KP", nullptr));
        KP_TURN_Data->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        PID_NAV_6->setTitle(QString());
        Base_NAV_Label_3->setText(QCoreApplication::translate("MainWindow", "VEL. BASE (%)", nullptr));
        PWM_TURN_Data->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        PWM_NAV_Label_3->setText(QCoreApplication::translate("MainWindow", "PWM MAX (%)", nullptr));
        Base_TURN_Data->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "COMUNICACION USB", nullptr));
        Connect_USB->setText(QCoreApplication::translate("MainWindow", "CONECTAR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "COMANDOS", nullptr));
        SendCMD_Button->setText(QCoreApplication::translate("MainWindow", "ENVIAR", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CENTRO DE COMANDOS", nullptr));
        LimpiarCMD_Button->setText(QCoreApplication::translate("MainWindow", "LIMPIAR", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "COMUNICACION WIFI", nullptr));
        Connect_WIFI_Button->setText(QCoreApplication::translate("MainWindow", "CONECTAR", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ORIENTACION DEL AUTO", nullptr));
        Home_Button->setText(QCoreApplication::translate("MainWindow", "INICIO", nullptr));
        Data_Button->setText(QCoreApplication::translate("MainWindow", "DATOS", nullptr));
        Comm_Button->setText(QCoreApplication::translate("MainWindow", "COMUNICACION", nullptr));
        Graph_Button->setText(QCoreApplication::translate("MainWindow", "GRAFICAS", nullptr));
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
