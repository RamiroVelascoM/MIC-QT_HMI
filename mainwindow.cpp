#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // TIMER
    QTimer1 = new QTimer(this);
    connect(QTimer1, &QTimer::timeout, this, &MainWindow::OnQTimer1);
    QTimer1->start(10);
    localTimeRef = dt.currentDateTime().time().minute();

    // COMUNICACION USB
    QSerialPort1 = new QSerialPort(this);
    connect(QSerialPort1,&QSerialPort::readyRead, this,&MainWindow::OnRxChar);
    ui->comboBox_PORTS->installEventFilter(this);
    header=0;

    // COMUNICACION WIFI
    QUdpSocket1 =new QUdpSocket(this);
    connect(QUdpSocket1,&QUdpSocket::readyRead,this,&MainWindow::onRxUDP);

    // COMANDOS
    ui->comboBox_2->addItem("ALIVE", ALIVE);
    ui->comboBox_2->addItem("FIRMWARE", FIRMWARE);
    //ui->comboBox_2->addItem("INFRARROJOS", ANALOG_IR);
    //ui->comboBox_2->addItem("IMU", MPU_6050);
    //ui->comboBox_2->addItem("DISPLAY", DISPLAY_SSD1306);
    //ui->comboBox_2->addItem("DATA MOTORES", RECEIVE_N20);
    ui->comboBox_2->addItem("TEST MOTORES", SEND_N20);
    //ui->comboBox_2->addItem("PULSADOR", BUTTONS);
    ui->comboBox_2->addItem("PID NAVEGACION", SET_PID_NAV);
    ui->comboBox_2->addItem("PID GIRO", SET_PID_TURN);
    ui->comboBox_2->addItem("PID GIRO EN U", SET_PID_U_TURN);
    ui->comboBox_2->addItem("CONFIG IR", SET_IR_THRESHOLD);

    // BOTONES E IMAGENES DEL HMI
    botones = new QButtonGroup(this);
    botones->setExclusive(true);
    botones->addButton(ui->Home_Button, 0);
    botones->addButton(ui->Data_Button, 1);
    botones->addButton(ui->Comm_Button, 2);
    botones->addButton(ui->Graph_Button, 3);
    connect(botones,&QButtonGroup::buttonClicked,this,&MainWindow::buttons);
    ui->stackedWidget->setCurrentIndex(0);

    // INICIALIZACIONES VARIAS
    initMPU(&myMPU);
    QPaintBox1 = new QPaintBox(0, 0, ui->positionRadar);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete QTimer1;
    delete QSerialPort1;
    delete QUdpSocket1;
    delete QPaintBox1;
}

void MainWindow::OnQTimer1(){
    static uint8_t time200ms = 20;
    static uint8_t time250ms = 25;
    static uint16_t time500ms = 50;
    //static uint16_t time1000ms = 100;
    static uint16_t time2500ms = 250;
    static uint16_t time5000ms = 500;
    uint8_t buf[1];

    // 200 ms
    if (!time200ms){
        time200ms = 20;
        buf[0] = ANALOG_IR;
        SendCMD(buf, 1);
    }
    else{
        time200ms--;
    }

    // 250 ms
    if (!time250ms){
        time250ms = 25;
        buf[0] = MPU_6050;
        SendCMD(buf, 1);
        DrawMovement();
    }
    else{
        time250ms--;
    }

    // 500 ms
    if (time500ms == 0){
        if (localTimeRef != dt.time().minute()){
            localTimeRef = dt.time().minute();
            buf[0] = RECEIVE_N20;
            SendCMD(buf, 1);
        }
        time500ms = 50;
    } else{
        time500ms--;
    }

    // 2500 ms
    if (time2500ms == 0){
        if (localTimeRef != dt.time().minute()){
            localTimeRef = dt.time().minute();
            buf[0] = DISPLAY_SSD1306;
            SendCMD(buf, 1);
        }
        time2500ms = 250;
    } else{
        time2500ms--;
    }

    // 5000 ms
    if(time5000ms == 0){
        time5000ms = 500;
        buf[0] = ALIVE;
        SendCMD(buf, 1);
    } else{
        time5000ms--;
    }

    // CONFIGURACION DEL DATO DE ALIVE
    if (carAlive == false){
        ui->AliveLabel->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: red;color: white;");
        ui->AliveLabel->setText("NO");
    } else {
        ui->AliveLabel->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: green;color: white;");
        ui->AliveLabel->setText("YES");
    }

    // DIBUJO DEL RADAR
    if (widgetSize.width != ui->positionRadar->width() || widgetSize.height != ui->positionRadar->height()){
        widgetSize.width = ui->positionRadar->width();
        widgetSize.height = ui->positionRadar->height();
        QPaintBox1->resize(widgetSize.width, widgetSize.height);
        DrawMotionMPU();
    }
}

void MainWindow::DrawMotionMPU(){
    QPen pen;
    QBrush brush;
    QPainter painter(QPaintBox1->getCanvas());

    pen.setWidth(2);
    pen.setColor(QColor(0, 0, 0, 255));
    brush.setColor(QColor(85, 0, 0, 255)); //(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::BrushStyle::SolidPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(0, 0, widgetSize.width, widgetSize.height);

    pen.setWidth(2);
    pen.setColor(QColor(255, 255, 255, 255));
    brush.setColor(QColor(255, 255, 255, 255));
    brush.setStyle(Qt::BrushStyle::NoBrush);
    painter.setBrush(brush);
    painter.setPen(pen);

    painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);
    painter.drawEllipse(-widgetSize.width/2, -widgetSize.height/2, widgetSize.width, widgetSize.height);
    painter.drawEllipse(-widgetSize.width/4, -widgetSize.height/4, widgetSize.width/2, widgetSize.height/2);
    painter.drawEllipse(-widgetSize.width/8, -widgetSize.height/8, widgetSize.width/4, widgetSize.height/4);
    painter.drawEllipse(-3*widgetSize.width/8, -3*widgetSize.height/8, 3*widgetSize.width/4, 3*widgetSize.height/4);

    painter.drawLine(-widgetSize.width/2, 0, widgetSize.width/2, 0);
    painter.drawLine(0, -widgetSize.height/2, 0, widgetSize.height/2);
    /*
    for(int i=0; i<8; i++){
        //painter.drawLine(x1 y1 x2 y2)
        painter.drawLine(-widgetSize.width/2, 0, widgetSize.width/2, 0);
        painter.drawLine(-widgetSize.width/2, -widgetSize.height/2, widgetSize.width/2, widgetSize.height/2);
        //painter.drawLine(-widgetSize.width, -widgetSize.height, widgetSize.width, widgetSize.height);
        //painter.drawLine(0, -ui->widget->width(), 0, ui->widget->height());
        painter.rotate(45);
    }
    */
    QPaintBox1->update();

}

void MainWindow::DrawMovement(){
    DrawMotionMPU();
    QPen pen;
    QBrush brush;
    QPainter painter(QPaintBox1->getCanvas());

    pen.setWidth(3);
    //pen.setColor(QColor(0, 232, 0, 255));
    //brush.setColor(QColor(0, 232, 0, 255));
    //pen.setColor(QColor(0, 232, 232, 255));
    //brush.setColor(QColor(0, 232, 232, 255));
    pen.setColor(QColor(255, 0, 0, 255));
    brush.setColor(QColor(255, 0, 0, 255));
    brush.setStyle(Qt::BrushStyle::NoBrush);
    painter.setBrush(brush);
    painter.setPen(pen);

    //painter.translate(0, ui->widget->height()/2);

    //painter.drawPoint(samples, -(int)acceleration[samples]*25);

    painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);

    painter.drawLine(0, 0, 150*cos(myMPU.Yaw * M_PI/180 + M_PI/2), 150*-sin(myMPU.Yaw * M_PI/180 + M_PI/2));

    //pen.setWidth(20);
    //pen.setColor(QColor(255, 125, 0, 255));
    //painter.setPen(pen);

    /////painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);

    //painter.drawPoint(myMPU.Px*2.0, myMPU.Py*2.0);

    QPaintBox1->update();

}

void MainWindow::buttons(QAbstractButton *button)
{
    int indexPag = botones->id(button);
    ui->stackedWidget->setCurrentIndex(indexPag);
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->comboBox_PORTS)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            ui->comboBox_PORTS->clear();
            QSerialPortInfo SerialPortInfo1;

            for(int i=0;i<SerialPortInfo1.availablePorts().count();i++)
                ui->comboBox_PORTS->addItem(SerialPortInfo1.availablePorts().at(i).portName());

            return QMainWindow::eventFilter(watched, event);
        }
        else {
            return false;
        }
    }
    else{
        return QMainWindow::eventFilter(watched, event);
    }
}

void MainWindow::OnRxChar()
{
    int count;
    uint8_t *buf;
    QString strHex;

    count = QSerialPort1->bytesAvailable();
    if(count <= 0)
        return;
    buf = new uint8_t[count];

    if (QSerialPort1->isOpen())
        QSerialPort1->read((char *)buf, count);

    strHex = "USB <-- 0x";
    for (int a=0; a<count; a++)
    {
        strHex = strHex + QString("%1").arg(buf[a], 2, 16, QChar('0')).toUpper();
    }
    //ui->Comandos_CMD->appendPlainText(strHex);

    for (int i=0; i<count; i++)
    {
        strHex = strHex + QString("%1").arg(buf[i], 2, 16, QChar('0')).toUpper();
        switch(header)
        {
        case 0:
            if(buf[i] == 'U'){
                header = 1;
                tmoRX = 5;
            }
            break;
        case 1:
            if(buf[i] == 'N')
                header = 2;
            else{
                header = 0;
                i--;
            }
            break;
        case 2:
            if(buf[i] == 'E')
                header = 3;
            else{
                header = 0;
                i--;
            }
            break;
        case 3:
            if(buf[i] == 'R')
                header = 4;
            else{
                header = 0;
                i--;
            }
            break;
        case 4:
            nBytes = buf[i];
            header = 5;
            break;
        case 5:
            if(buf[i] == ':'){
                header = 6;
                index = 0;
                cks = 'U' ^ 'N' ^ 'E' ^ 'R' ^ ':' ^ nBytes;
            }
            else{
                header = 0;
                i--;
            }
            break;
        case 6:
            nBytes--;
            if(nBytes > 0){
                rxBuf[index++] = buf[i];
                cks ^= buf[i];
            }
            else{
                header = 0;
                if(cks == buf[i])
                    DecodeCmd(rxBuf);
                else
                    ui->Comandos_CMD->appendPlainText("ERROR CHECKSUM");
            }
            break;
        }
    }
    delete [] buf;
}

void MainWindow::DecodeHeader(uint8_t *buf, int count){
    for (int i=0; i<count; i++) {

        switch(header){
        case 0:
            if(buf[i] == 'U'){
                header = 1;
                tmoRX = 5;
            }
            break;
        case 1:
            if(buf[i] == 'N')
                header = 2;
            else{
                header = 0;
                i--;
            }
            break;
        case 2:
            if(buf[i] == 'E')
                header = 3;
            else{
                header = 0;
                i--;
            }
            break;
        case 3:
            if(buf[i] == 'R')
                header = 4;
            else{
                header = 0;
                i--;
            }
            break;
        case 4:
            nBytes = buf[i];
            header = 5;
            break;
        case 5:
            if(buf[i] == ':'){
                header = 6;
                index = 0;
                cks = 'U' ^ 'N' ^ 'E' ^ 'R' ^ ':' ^ nBytes;
            }else{
                header = 0;
                i--;
            }
            break;
        case 6:
            nBytes--;
            if(nBytes > 0){
                rxBuf[index++] = buf[i];
                cks ^= buf[i];
            }else{
                header = 0;
                if(cks == buf[i])
                    DecodeCmd(rxBuf);
                else
                    ui->Comandos_CMD->appendPlainText("ERROR CHECKSUM");
            }
            break;
        }
    }
}

void MainWindow::onRxUDP(){
    uint8_t *buf;
    qint64 count = 0;
    QString strHex;

    while (QUdpSocket1->hasPendingDatagrams()){
        count=QUdpSocket1->pendingDatagramSize();
        if(count<=0){
            return;
        }
        buf = new uint8_t[count];
        QUdpSocket1->readDatagram((char*)buf, count, &hostAddress, &remotePort);
        ui->lineEdit_2->setText("IPv4: " + (hostAddress.toString().right(hostAddress.toString().length()-7)));
        strHex = "WIFI <-- 0x";
        for (int a=0; a<count; a++) {
            strHex = strHex + QString("%1").arg(buf[a], 2, 16, QChar('0')).toUpper();
        }
        //ui->Comandos_CMD->appendPlainText((char*)buf);
    }
    DecodeHeader(buf,count);
    delete [] buf;
}

void MainWindow::DecodeCmd(uint8_t *rxBuf)
{
    uint8_t offset = 1;
    _work w;

    switch (rxBuf[0])
    {
        case ALIVE:
            if(rxBuf[1] == ACKNOWLEDGE){
                ui->Comandos_CMD->appendPlainText(QString("BLUEPILL: I'M ALIVE at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
                carAlive = true;
            } else {
                carAlive = false;
            }
            break;
        case FIRMWARE:
            ui->Comandos_CMD->appendPlainText("FIRMWARE: MIC2024 V2.1");
            break;
        case ANALOG_IR:
            ui->ir_0->setText(QString("%1").arg(rxBuf[1], 2, 10, QChar('0')));
            ui->ir_1->setText(QString("%1").arg(rxBuf[2], 2, 10, QChar('0')));
            ui->ir_2->setText(QString("%1").arg(rxBuf[3], 2, 10, QChar('0')));
            ui->ir_3->setText(QString("%1").arg(rxBuf[4], 2, 10, QChar('0')));
            ui->ir_4->setText(QString("%1").arg(rxBuf[5], 2, 10, QChar('0')));
            ui->ir_5->setText(QString("%1").arg(rxBuf[6], 2, 10, QChar('0')));
            ui->ir_6->setText(QString("%1").arg(rxBuf[7], 2, 10, QChar('0')));
            ui->ir_7->setText(QString("%1").arg(rxBuf[8], 2, 10, QChar('0')));
            break;
        case MPU_6050:
            // Obtencion de datos crudos desde el MPU6050: Acelerometro
            w.u8[0] = rxBuf[1];
            w.u8[1] = rxBuf[2];
            myMPU.Ax = ((float)w.i16[0]/16384.0f)*9.81f;
            w.u8[0] = rxBuf[3];
            w.u8[1] = rxBuf[4];
            myMPU.Ay = ((float)w.i16[0]/16384.0f)*9.81f;
            w.u8[0] = rxBuf[5];
            w.u8[1] = rxBuf[6];
            myMPU.Az = ((float)w.i16[0]/16384.0f)*9.81f;

            // Obtencion de datos crudos desde el MPU6050: Giroscopio
            w.u8[0] = rxBuf[7];
            w.u8[1] = rxBuf[8];
            myMPU.Gx = ((float)w.i16[0]/65.5f);
            w.u8[0] = rxBuf[9];
            w.u8[1] = rxBuf[10];
            myMPU.Gy = ((float)w.i16[0]/65.5f);
            w.u8[0] = rxBuf[11];
            w.u8[1] = rxBuf[12];
            myMPU.Gz = ((float)w.i16[0]/65.5f);

            // Obtencion de datos crudos desde el MPU6050: Yaw
            w.u8[0] = rxBuf[13];
            w.u8[1] = rxBuf[14];
            myMPU.Yaw = (float)w.i16[0];

            ui->AX_Data->setText(QString("%1").arg(myMPU.Ax, 1, 'f', 3));
            ui->AY_Data->setText(QString("%1").arg(myMPU.Ay, 1, 'f', 3));
            ui->AZ_Data->setText(QString("%1").arg(myMPU.Az, 1, 'f', 3));

            ui->GX_Data->setText(QString("%1").arg(myMPU.Gx, 1, 'f', 3));
            ui->GY_Data->setText(QString("%1").arg(myMPU.Gy, 1, 'f', 3));
            ui->GZ_Data->setText(QString("%1").arg(myMPU.Gz, 1, 'f', 3));

            /*
            ui->PX_Data->setText(QString("%1").arg(myMPU.Px, 1, 'f', 3));
            ui->PY_Data->setText(QString("%1").arg(myMPU.Py, 1, 'f', 3));
            */
            ui->Yaw_Data->setText(QString("%1").arg(myMPU.Yaw, 1, 'f', 3));
            break;
        case RECEIVE_N20:
            powerMotorLEFT = (int8_t)rxBuf[1];
            powerMotorRIGHT = (int8_t)rxBuf[2];

            if (powerMotorLEFT < 0){
                ui->LMPOW_NEG->setValue(-powerMotorLEFT);
                ui->LMPOW_POS->setValue(0);
            }else{
                ui->LMPOW_POS->setValue(powerMotorLEFT);
                ui->LMPOW_NEG->setValue(0);
            }
            if (powerMotorRIGHT < 0){
                ui->RMPOW_NEG->setValue(-powerMotorRIGHT);
                ui->RMPOW_POS->setValue(0);
            }else{
                ui->RMPOW_POS->setValue(powerMotorRIGHT);
                ui->RMPOW_NEG->setValue(0);
            }
            break;
        case BUTTONS:
            if (rxBuf[1]==1)
                ui->EstadoBotonLabel->setText("IDLE");
            else if (rxBuf[1]==2)
                ui->EstadoBotonLabel->setText("SCAN");
            else if (rxBuf[1]==3)
                ui->EstadoBotonLabel->setText("SOLVE");
            ui->Comandos_CMD->appendPlainText(QString("NUEVO ESTADO: %0, at %1:%2:%3").arg(rxBuf[1]).arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
            break;
        default:
            break;
    }
}

void MainWindow::SendCMD(uint8_t *buf, uint8_t length)
{
    uint8_t tx[256];
    uint8_t cks, i;
    QString strHex;

    if((!QSerialPort1->isOpen())&&(!QUdpSocket1->isOpen()))
        return;

    tx[0] = 'U';
    tx[1] = 'N';
    tx[2] = 'E';
    tx[3] = 'R';
    tx[4] = length + 1;
    tx[5] = ':';

    memcpy(&tx[6], buf, length);
    cks = 0;
    for (i=0; i<(length+6); i++)
    {
        cks ^= tx[i];
    }

    tx[i] = cks;
    strHex = "--> 0x";
    for (int i=0; i<length+7; i++)
    {
        strHex = strHex + QString("%1").arg(tx[i], 2, 16, QChar('0')).toUpper();
    }

    //if (showHexCMD)
    //{
    //    ui->plainTextEdit->appendPlainText(strHex);
    //}
    //ui->textBrowser->append(strHex); // quitar maybe

    if (QUdpSocket1->isOpen())
        QUdpSocket1->writeDatagram((char *)tx, length+7, hostAddress, remotePort);

    if (QSerialPort1->isOpen())
        QSerialPort1->write((char *)tx, length+7);
}

void MainWindow::on_SendCMD_Button_clicked()
{
    volatile uint8_t indice = 0;
    uint8_t cmd, buf[24];
    _work w;
    int n;
    bool ok;
    //QString strHex;

    if(ui->comboBox_2->currentText() == "")
        return;

    cmd = ui->comboBox_2->currentData().toInt();
    //ui->Comandos_CMD->appendPlainText("USER -> 0x" + (QString("%1").arg(cmd, 2, 16, QChar('0'))).toUpper());
    n = 0;

    switch (cmd)
    {
    case ALIVE:
    case FIRMWARE:
    case ANALOG_IR:
    case MPU_6050:
    case RECEIVE_N20:
    case BUTTONS://ALIVE   PC=>MBED 0xF0 ;  MBED=>PC 0xF0 0x0D
        n = 1;
        break;
    case CONTROL_MODE:
        buf[indice++] = cmd;
        w.u8[0] = MODESTARTED;
        buf[indice++] = w.u8[0];
        n = 2;
        break;
    case DISPLAY_SSD1306:
        buf[indice++] = cmd;
        w.u8[0] = (uint8_t)dt.currentDateTime().time().hour();
        buf[indice++] = w.u8[0];
        w.u8[0] = (uint8_t)dt.currentDateTime().time().minute();
        buf[indice++] = w.u8[0];
        n = 3;
        break;
    case SEND_N20:
        buf[indice++] = SEND_N20;
        w.i8[0] = QInputDialog::getInt(this, "MOTOR L: SETTINGS", "Potencia: Motor Izquierdo ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.i8[0];
        w.i8[1] = QInputDialog::getInt(this, "MOTOR R: SETTINGS", "Potencia: Motor Derecho ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.i8[1];
        n = 3;
        break;
    case SET_PID_NAV:
        buf[indice++] = SET_PID_NAV;
        // KP
        w.u16[0] = (uint16_t)QInputDialog::getInt(this, "KP, PID Navegacion", "Configurar KP: ", 70, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Nav[0] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KP_NAV_Data->setText(QString("%1").arg(Data_PID_Nav[0], 2, 10, QChar('0')));
        // KI
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KI, PID Navegacion", "Configurar KI: ", 0, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Nav[1] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KI_NAV_Data->setText(QString("%1").arg(Data_PID_Nav[1], 2, 10, QChar('0')));
        // KD
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KD, PID Navegacion", "Configurar KD: ", 40, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Nav[2] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KD_NAV_Data->setText(QString("%1").arg(Data_PID_Nav[2], 2, 10, QChar('0')));
        // PWM OUT
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Navegacion", "Configurar PWM OUT MAX (0-30%): ", 30, 0, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_Nav[3] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->PWM_NAV_Data->setText(QString("%1 %").arg(Data_PID_Nav[3], 2, 10, QChar('0')));
        // PWM BASE
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Navegacion", "Configurar PWM BASE (30-50%): ", 30, 30, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_Nav[4] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->Base_NAV_Data->setText(QString("%1").arg(Data_PID_Nav[4], 4, 10, QChar('0')));
        n = 9;
        break;
    case SET_PID_TURN:
        buf[indice++] = SET_PID_TURN;
        // KP
        w.u16[0] = (uint16_t)QInputDialog::getInt(this, "KP, PID Giro", "Configurar KP: ", 70, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Turn[0] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KP_TURN_Data->setText(QString("%1").arg(Data_PID_Turn[0], 2, 10, QChar('0')));
        // KI
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KI, PID Giro", "Configurar KI: ", 0, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Turn[1] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KI_TURN_Data->setText(QString("%1").arg(Data_PID_Turn[1], 2, 10, QChar('0')));
        // KD
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KD, PID Giro", "Configurar KD: ", 40, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_Turn[2] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KD_TURN_Data->setText(QString("%1").arg(Data_PID_Turn[2], 2, 10, QChar('0')));
        // PWM OUT
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Giro", "Configurar PWM OUT MAX (0-50%): ", 30, 0, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_Turn[3] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->PWM_TURN_Data->setText(QString("%1 %").arg(Data_PID_Turn[3], 2, 10, QChar('0')));
        // PWM BASE
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Giro", "Configurar PWM BASE (30-50%): ", 30, 30, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_Turn[4] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->Base_TURN_Data->setText(QString("%1").arg(Data_PID_Turn[4], 4, 10, QChar('0')));
        n = 9;
        break;
    case SET_PID_U_TURN:
        buf[indice++] = SET_PID_U_TURN;
        // KP
        w.u16[0] = (uint16_t)QInputDialog::getInt(this, "KP, PID Giro en U", "Configurar KP: ", 70, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_U_Turn[0] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KP_UT_Data->setText(QString("%1").arg(Data_PID_U_Turn[0], 2, 10, QChar('0')));
        // KI
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KI, PID Giro en U", "Configurar KI: ", 0, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_U_Turn[1] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KI_UT_Data->setText(QString("%1").arg(Data_PID_U_Turn[1], 2, 10, QChar('0')));
        // KD
        w.u16[0] = (uint16_t)QInputDialog::getDouble(this, "KD, PID Giro en U", "Configurar KD: ", 40, 0, 65535, 0, &ok); // 0.00 a 250.00
        if (!ok)
            break;
        Data_PID_U_Turn[2] = w.u16[0];
        buf[indice++] = w.u8[0];
        buf[indice++] = w.u8[1];
        ui->KD_UT_Data->setText(QString("%1").arg(Data_PID_U_Turn[2], 2, 10, QChar('0')));
        // PWM OUT
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Giro en U", "Configurar PWM OUT MAX (0-50%): ", 30, 0, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_U_Turn[3] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->PWM_UT_Data->setText(QString("%1 %").arg(Data_PID_U_Turn[3], 2, 10, QChar('0')));
        // PWM BASE
        w.u8[0] = (uint8_t)QInputDialog::getInt(this, "PWM, PID Giro en U", "Configurar PWM BASE (30-50%): ", 30, 30, 50, 0, &ok); // 0 a 9999
        if (!ok)
            break;
        Data_PID_U_Turn[4] = w.u8[0];
        buf[indice++] = w.u8[0];
        ui->Base_UT_Data->setText(QString("%1").arg(Data_PID_U_Turn[4], 4, 10, QChar('0')));
        n = 9;
        break;
    case SET_IR_THRESHOLD:
        buf[indice++] = SET_IR_THRESHOLD;
        w.u8[0] = QInputDialog::getInt(this, "IR0 THRESHOLD", "Umbral: Infrarrojo Derecho [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR1 THRESHOLD", "Umbral: Infrarrojo Diagonal Derecho [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR2 THRESHOLD", "Umbral: Infrarrojo Frontal Derecho [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR3 THRESHOLD", "Umbral: Infrarrojo Inferior Delantero [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR4 THRESHOLD", "Umbral: Infrarrojo Frontal Izquierdo [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR5 THRESHOLD", "Umbral: Infrarrojo Diagonal Izquierdo [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR6 THRESHOLD", "Umbral: Infrarrojo Izquierdo [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        w.u8[0] = QInputDialog::getInt(this, "IR7 THRESHOLD", "Umbral: Infrarrojo Inferior Trasero [mm]", 0, 0, 200, 1, &ok);
        if (!ok)
            break;
        buf[indice++] = w.u8[0];
        n = 9;
        break;
    default:
        return;
        ;
    }

    if(n)
    {
        buf[0] = cmd;
        SendCMD(buf, n);
    }
}


void MainWindow::on_LimpiarCMD_Button_clicked()
{
    ui->Comandos_CMD->clear();
}


void MainWindow::on_Connect_USB_clicked()
{
    if(QSerialPort1->isOpen())
    {
        QSerialPort1->close();
        ui->Connect_USB->setText("CONECTAR");
        carAlive = false;
    }
    else
    {
        if(ui->comboBox_PORTS->currentText() == "")
            return;

        QSerialPort1->setPortName(ui->comboBox_PORTS->currentText());
        QSerialPort1->setBaudRate(115200);
        QSerialPort1->setParity(QSerialPort::NoParity);
        QSerialPort1->setDataBits(QSerialPort::Data8);
        QSerialPort1->setStopBits(QSerialPort::OneStop);
        QSerialPort1->setFlowControl(QSerialPort::NoFlowControl);

        if(QSerialPort1->open(QSerialPort::ReadWrite)){
            //QTimer1->start(10);
            ui->Connect_USB->setText("DESCONECTAR");
        }
    }
}


void MainWindow::on_Connect_WIFI_Button_clicked()
{
    qint16 port;
    bool ok;

    if(QUdpSocket1->isOpen()){
        QUdpSocket1->abort();
        QUdpSocket1->close();
        ui->Connect_WIFI_Button->setText("CONECTAR");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->Comandos_CMD->clear();
        carAlive = false;
    }else{
        port = ui->lineEdit->text().toInt(&ok);
        if(!ok)
            return;
        QUdpSocket1->bind(port);
        if(QUdpSocket1->open(QUdpSocket::ReadWrite)){
            ui->Connect_WIFI_Button->setText("DESCONECTAR");
        }else{
            ui->Comandos_CMD->appendPlainText("No se pudo abrir el puerto UDP");
        }
    }
}


void MainWindow::on_startModeButton_clicked()
{
    uint8_t buf[2];
    if(QUdpSocket1->isOpen() || QSerialPort1->isOpen()){
        if (ui->startModeButton->text() == "START"){
            MODESTARTED = 1;
            ui->startModeButton->setText("STOP");
            ui->startModeButton->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: red;color: white;");
        } else if (ui->startModeButton->text() == "STOP"){
            MODESTARTED = 0;
            ui->startModeButton->setText("START");
            ui->startModeButton->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: green;color: white;");
        }
        buf[0] = CONTROL_MODE;
        buf[1] = MODESTARTED;
        SendCMD(buf, 2);
    }
}

