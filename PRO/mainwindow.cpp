#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , serial(new QSerialPort)
    , repeatSendTimer(new QTimer)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_data_header_bfsk->setEnabled(false);
    ui->lineEdit_data_tail_bfsk->setEnabled(false);
    ui->lineEdit_data_header_qfsk->setEnabled(false);
    ui->lineEdit_data_tail_qfsk->setEnabled(false);
    ui->lineEdit_bfsk_data_crc->setEnabled(false);
    ui->lineEdit_qfsk_data_crc->setEnabled(false);

    currentTimeLabel = new QLabel; // 创建QLabel控件
    ui->statusbar->addWidget(currentTimeLabel); //在状态栏添加此控件
    on_time_update();
    QTimer *timer = new QTimer(this);
    timer->start(500); //每隔300ms发送timeout的信号
    connect(timer, SIGNAL(timeout()),this,SLOT(on_time_update()));

    //    ui->statusbar->setGeometry()

    //    C++ 正则表达式书写规则如下：
    //    [0-9]//可以输入0到 9这几个数字
    //    [A-Za-z]//输入任意英文的常规写法
    //    [^]//有^标记时，方框内不能输入，例如[^abc]就不能输入"a","b","c"。
    //    {}/*跟在[]后，表示正则限制，例如[0-9]{4}，则只能输入4位数字，[0-9]{2,9}，
    //    则能输入2位到9位数字，如果你想输入一个可以转换成double的数字，可以表示为*/
    //    [0-9]{1,}[.]{1}[0-9]{1,}//其中，类似{1,}的表达表示大于1位数，不设上限。

    QRegExp regx("[A-Fa-f0-9]{6}");
    QValidator *validator = new QRegExpValidator(regx, ui->lineEdit_bfsk_data);
    ui->lineEdit_bfsk_data->setValidator(validator);
    ui->lineEdit_qfsk_data->setValidator(validator);

    ui->pushButton_close->setEnabled(false);
    ui->pushButton_open->setEnabled(true);
    ui->pushButton_scan->setEnabled(true);
    ui->pushButton_send->setEnabled(false);
    ui->comboBox_baudrate->setCurrentIndex( CONFIG_BAUDRATE_9600_INDEX );
    ui->comboBox_checkdigit->setCurrentIndex( CONFIG_PARITY_NONE_INDEX );
    ui->comboBox_databits->setCurrentIndex( CONFIG_DATABITS_8_INDEX );
    ui->comboBox_stopbits->setCurrentText( CONFIG_STOPBIT_ONE_INDEX );
    ui->comboBox_flowctrl->setCurrentIndex( CONFIG_FLOWCTRL_NONE_INDEX );
    RefreshTheUSBList();
    ui->checkBox_repeat->setChecked(false);
    ui->checkBox_repeat->setDisabled(true);
    ui->spinBox_repeat->setMinimum(1000);
    ui->spinBox_repeat->setSingleStep(100);

    repeatSend = ui->checkBox_repeat->isChecked();
    repeatSendTimer->stop();
    connect( repeatSendTimer, SIGNAL(timeout()), this, SLOT(SoftAutoWriteUart()) );
    connect(serial,SIGNAL(readyRead()),this,SLOT( serialRcvData() ) );

}

MainWindow::~MainWindow()
{
    on_pushButton_close_clicked();
    delete ui;
}

void MainWindow::on_time_update()
{
    //[1] 获取时间
    QDateTime current_time = QDateTime::currentDateTime();
    QString timestr = current_time.toString( "yyyy年MM月dd日 hh:mm:ss"); //设置显示的格式
    currentTimeLabel->setText(timestr); //设置label的文本内容为时间
}

void MainWindow::on_pushButton_open_clicked()
{
    qint8 comboxIndex = 0xff;
    // set baud rate.
    comboxIndex = ui->comboBox_baudrate->currentIndex();
    qDebug() << "COM Config Info: ";
    switch( comboxIndex ) {
    case CONFIG_BAUDRATE_1200_INDEX:
        serial->setBaudRate(QSerialPort::Baud1200);

        qDebug() << "Baud Rate: 1200; ";
        break;
    case CONFIG_BAUDRATE_2400_INDEX:
        serial->setBaudRate(QSerialPort::Baud2400);

        qDebug() << "Baud Rate: 2400; ";
        break;
    case CONFIG_BAUDRATE_4800_INDEX:
        serial->setBaudRate(QSerialPort::Baud4800);
        qDebug() << "Baud Rate: 4800; ";

        break;
    case CONFIG_BAUDRATE_9600_INDEX:
        serial->setBaudRate(QSerialPort::Baud9600);
        qDebug() << "Baud Rate: 9600; ";

        break;
    case CONFIG_BAUDRATE_19200_INDEX:
        serial->setBaudRate(QSerialPort::Baud19200);
        qDebug() << "Baud Rate: 19200; ";

        break;
    case CONFIG_BAUDRATE_38400_INDEX:
        serial->setBaudRate(QSerialPort::Baud38400);
        qDebug() << "Baud Rate: 38400; ";

        break;
    case CONFIG_BAUDRATE_57600_INDEX:
        serial->setBaudRate(QSerialPort::Baud57600);
        qDebug() << "Baud Rate: 57600; ";

        break;
    case CONFIG_BAUDRATE_115200_INDEX:
        serial->setBaudRate(QSerialPort::Baud115200);
        qDebug() << "Baud Rate: 115200; ";

        break;
    }
    // set stop bits.
    comboxIndex = ui->comboBox_stopbits->currentIndex();

    switch (comboxIndex) {
    case CONFIG_STOPBIT_ONE_INDEX:
        serial->setStopBits(QSerialPort::OneStop);
        qDebug() << "stop bits: 1 bit; ";
        //statusBarComInfo.at(4) = ""
        break;
    case CONFIG_STOPBIT_ONEANDHALF_INDEX:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        qDebug() << "stop bits: 1.5 bits;";
        break;
    case CONFIG_STOPBIT_TWO_INDEX:
        serial->setStopBits(QSerialPort::TwoStop);
        qDebug() << "stop bits: 2 bits; ";
        break;
    }

    // set parity.
    comboxIndex = ui->comboBox_checkdigit->currentIndex();
    switch( comboxIndex ) {

    case CONFIG_PARITY_NONE_INDEX:
        serial->setParity( QSerialPort::NoParity );
        qDebug() << "partiy set: noParity.";
        break;

    case CONFIG_PARITY_EVEN_INDEX:
        serial->setParity( QSerialPort::EvenParity );
        qDebug() << "partiy set: EvenParity.";
        break;

    case CONFIG_PARITY_ODD_INDEX:
        serial->setParity( QSerialPort::OddParity );
        qDebug() << "partiy set: OddParity.";
        break;

    case CONFIG_PARITY_SPACE_INDEX:
        serial->setParity( QSerialPort::SpaceParity );
        qDebug() << "partiy set: SpaceParity.";
        break;

    case CONFIG_PARITY_MARK_INDEX:
        serial->setParity( QSerialPort::MarkParity );
        qDebug() << "partiy set: MarkParity.";
        break;

    }

    // set databytes.
    comboxIndex = ui->comboBox_databits->currentIndex();
    switch (comboxIndex) {
    case CONFIG_DATABITS_5_INDEX:
        serial->setDataBits(QSerialPort::Data5);
        qDebug() << "Data bits: 5 bits; ";
        break;

    case CONFIG_DATABITS_6_INDEX:
        serial->setDataBits(QSerialPort::Data6);
        qDebug() << "Data bits: 6 bits; ";
        break;

    case CONFIG_DATABITS_7_INDEX:
        serial->setDataBits(QSerialPort::Data7);
        qDebug() << "Data bits: 7 bits; ";
        break;

    case CONFIG_DATABITS_8_INDEX:
        serial->setDataBits(QSerialPort::Data8);
        qDebug() << "Data bits: 8 bits; ";
        break;
    }
    // set flowctrl
    comboxIndex = ui->comboBox_flowctrl->currentIndex();
    switch (comboxIndex) {
    case CONFIG_FLOWCTRL_NONE_INDEX:
        serial->setFlowControl(QSerialPort::NoFlowControl);
        qDebug() << "flow ctrl: no flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_HARD_INDEX:
        serial->setFlowControl(QSerialPort::HardwareControl);
        qDebug() << "flow ctrl: hardware flow ctrl; ";
        break;
    case CONFIG_FLOWCTRL_SOFT_INDEX:
        serial->setFlowControl(QSerialPort::SoftwareControl);
        qDebug() << "flow ctrl: software flow ctrl; ";
        break;
    }
    qDebug() << "--------------------------------; \n";

    QString portInfo = ui->comboBox_serialPort->currentText();
    QList<QString> infoList = portInfo.split(',');
    currentConnectCom = infoList.at(0);
    qDebug() << currentConnectCom;
    qDebug() << tr("SYSTEM: Serial port ")+portInfo+tr(" ,system is connecting with it.....");
    serial->setPortName(currentConnectCom);
    //serial.close();
    if( ui->comboBox_serialPort->currentIndex() == -1 ) {
        //QMessageBox::warning(this,"Warning","Please click firstly the scan button to check your available devices.\nthan connect after selecting one device in the list.");
        return;
    }
    if (!serial->open(QIODevice::ReadWrite)) {
        //QMessageBox::warning(this,"Warning","Open serial port fail!\n Please see the the information window to solve problem.");
        qDebug() << tr("SYSTEM: The serial port failed to open,Please check as follows: ");
        qDebug() << tr("        1> if the serial port is occupied by other software? ");
        qDebug() << tr("        2> if the serial port connection is normal?");
        qDebug() << tr("        3> if the program is run at root user? You can use the cmd sudo ./(programname) and type your password to be done.");

        ui->comboBox_serialPort->setEnabled(true);
    } else {
        qDebug() << tr("SYSTEM: The system has been connected with ")+portInfo+" " ;
        ui->pushButton_close->setEnabled(true);
        ui->pushButton_open->setEnabled(false);
        ui->comboBox_serialPort->setEnabled(false);
        ui->pushButton_scan->setEnabled(false);
        ui->pushButton_send->setEnabled(true);
        ui->checkBox_repeat->setEnabled(true);
        //QMessageBox::information(this,"Information", "UART: "+ portInfo+" has been connected! \n"+"Wait device signals.");
    }
    qDebug() << "The serial has been openned!! \n";
}


void MainWindow::on_pushButton_send_clicked()
{
    if( ui->tabWidget->currentIndex() == 0){
        this->protocol_bfsk();
    } else {
        this->protocol_qfsk();
    }
}

void MainWindow::protocol_bfsk()
{
    /* MSB Frist
     *    数据头   同步头频率  同步间隔     频率1     频率2   码元宽度            数据           数据尾
     * |--------|---------|---------|---------|--------|---------|--------------------|---------|
     * 0xA5 0x5A 0x03 0x44 0x00 0x10 0x01 0x52 0x02 0x55 0x05 0x33 0x01 0x02 0x03 0x04 0x5B 0xB5
     *
     * */
    uint32_t bfsk_data;
    char data[18]={0};
    data[0] = 0xA5;
    data[1] = 0x5A;
    data[2] = (ui->lineEdit_bfsk_sync_freq->text().toUInt() & 0xFF00) >> 8;
    data[3] = (ui->lineEdit_bfsk_sync_freq->text().toUInt() & 0x00FF) >> 0;
    data[4] = (ui->lineEdit_bfsk_sync_time_gap->text().toUInt() & 0xFF00) >> 8;
    data[5] = (ui->lineEdit_bfsk_sync_time_gap->text().toUInt() & 0x00FF) >> 0;
    data[6] = (ui->lineEdit_bfsk_freq_1->text().toUInt() & 0xFF00) >> 8;
    data[7] = (ui->lineEdit_bfsk_freq_1->text().toUInt() & 0x00FF) >> 0;
    data[8] = (ui->lineEdit_bfsk_freq_2->text().toUInt() & 0xFF00) >> 8;
    data[9] = (ui->lineEdit_bfsk_freq_2->text().toUInt() & 0x00FF) >> 0;
    data[10] = (ui->lineEdit_bfsk_symbol_wide->text().toUInt() & 0xFF00) >> 8;
    data[11] = (ui->lineEdit_bfsk_symbol_wide->text().toUInt() & 0x00FF) >> 0;
    bfsk_data = ui->lineEdit_bfsk_data->text().toUInt(NULL,16) << 8;
    data[12] = (bfsk_data & 0xFF000000) >> 24;
    data[13] = (bfsk_data & 0x00FF0000) >> 16;
    data[14] = (bfsk_data & 0x0000FF00) >> 8;
    data[15] = (bfsk_data & 0x00000000) >> 0;
    data[16] = 0x5B;
    data[17] = 0xB5;

    uint8_t crc_data[3]={(uint8_t)data[12],(uint8_t)data[13],(uint8_t)data[14]};
    data[15] = crc8_maxim(crc_data,3);

    ui->lineEdit_bfsk_data_crc->setText(QString::number(data[15],16).toUpper());

    qDebug() << bfsk_data;
    QString  str = "BFSK: ";
    QString  str_tmp;

    for (int i = 0;i < 18;i ++) {
        str_tmp = QString::number((uint8_t)data[i],16).toUpper();
        if(str_tmp == '0'){
            str_tmp = "00";
        }
        str.append(str_tmp);
        str.append(' ');
    }
    ui->textBrowser->append(str);

    //    for (int i=0;i<18;i++) {
    //        qDebug("%d %d ",i,data[i]);
    //    }
    int symbol_number,tmp_data;
    tmp_data = ui->lineEdit_bfsk_data->text().toUInt(NULL,16);
    symbol_number = 0;
    for (int i = 0;i < 8; i++) {
        if(tmp_data & 0xF){
            symbol_number ++;
        }
        tmp_data >>= 4;
    }

    singal_wide = 100 + ui->lineEdit_bfsk_sync_time_gap->text().toUInt() + ui->lineEdit_bfsk_symbol_wide->text().toUInt() * symbol_number * 4;
    if(last_singal_wide != singal_wide){
        last_singal_wide = singal_wide;
        ui->spinBox_repeat->setMinimum(last_singal_wide + 100);
        ui->spinBox_repeat->setValue(last_singal_wide + 200);
    }

    if(singal_wide > ui->spinBox_repeat->value()){
        ui->spinBox_repeat->setValue(singal_wide + 200);
    }
    //    qDebug() << symbol_number << singal_wide;
    qDebug() << "BFSK";

    serial->write(data,18);

}

void MainWindow::protocol_qfsk()
{
    /* MSB Frist
     *    数据头   同步头频率  同步间隔     频率1     频率2   码元宽度            数据           数据尾
     * |--------|---------|---------|---------|--------|---------|--------------------|---------|
     * 0xA5 0x5A 0x03 0x44 0x00 0x10 0x01 0x52 0x02 0x55 0x05 0x33 0x01 0x02 0x03 0x04 0x5B 0xB5
     *
     * */
    uint32_t qfsk_data;
    char data[22]={0};
    data[0] = 0xA5;
    data[1] = 0x5A;
    data[2] = (ui->lineEdit_qfsk_sync_freq->text().toUInt() & 0xFF00) >> 8;
    data[3] = (ui->lineEdit_qfsk_sync_freq->text().toUInt() & 0x00FF) >> 0;
    data[4] = (ui->lineEdit_qfsk_sync_time_gap->text().toUInt() & 0xFF00) >> 8;
    data[5] = (ui->lineEdit_qfsk_sync_time_gap->text().toUInt() & 0x00FF) >> 0;
    data[6] = (ui->lineEdit_qfsk_freq_1->text().toUInt() & 0xFF00) >> 8;
    data[7] = (ui->lineEdit_qfsk_freq_1->text().toUInt() & 0x00FF) >> 0;
    data[8] = (ui->lineEdit_qfsk_freq_2->text().toUInt() & 0xFF00) >> 8;
    data[9] = (ui->lineEdit_qfsk_freq_2->text().toUInt() & 0x00FF) >> 0;
    data[10] = (ui->lineEdit_qfsk_freq_3->text().toUInt() & 0xFF00) >> 8;
    data[11] = (ui->lineEdit_qfsk_freq_3->text().toUInt() & 0x00FF) >> 0;
    data[12] = (ui->lineEdit_qfsk_freq_4->text().toUInt() & 0xFF00) >> 8;
    data[13] = (ui->lineEdit_qfsk_freq_4->text().toUInt() & 0x00FF) >> 0;
    data[14] = (ui->lineEdit_qfsk_symbol_wide->text().toUInt() & 0xFF00) >> 8;
    data[15] = (ui->lineEdit_qfsk_symbol_wide->text().toUInt() & 0x00FF) >> 0;
    qfsk_data = ui->lineEdit_qfsk_data->text().toUInt(NULL,16) << 8;
    data[16] = (qfsk_data & 0xFF000000) >> 24;
    data[17] = (qfsk_data & 0x00FF0000) >> 16;
    data[18] = (qfsk_data & 0x0000FF00) >> 8;
    data[19] = (qfsk_data & 0xFF000000) >> 0; //清零
    data[20] = 0x5B;
    data[21] = 0xB5;

    qDebug() << "QFSK";

    uint8_t crc_data[3]={(uint8_t)data[16],(uint8_t)data[17],(uint8_t)data[18]};
    data[19] = crc8_maxim(crc_data,3);

    ui->lineEdit_qfsk_data_crc->setText(QString::number(data[19],16).toUpper());

    //    for (int i=0;i<18;i++) {
    //        qDebug("%d %d ",i,data[i]);
    //    }

    QString  str = "QFSK: ";
    QString  str_tmp;

    for (int i = 0;i < 22;i ++) {
        str_tmp = QString::number((uint8_t)data[i],16).toUpper();
        if(str_tmp == '0'){
            str_tmp = "00";
        }
        str.append(str_tmp);
        str.append(' ');
    }
    ui->textBrowser->append(str);

    int symbol_number,tmp_data;
    tmp_data = ui->lineEdit_qfsk_data->text().toUInt(NULL,16);
    symbol_number = 0;
    for (int i = 0;i < 8; i++) {
        if(tmp_data & 0xF){
            symbol_number ++;
        }
        tmp_data >>= 4;
    }

    singal_wide = 100 + ui->lineEdit_bfsk_sync_time_gap->text().toUInt() + ui->lineEdit_bfsk_symbol_wide->text().toUInt() * symbol_number * 2;
    if(last_singal_wide != singal_wide){
        last_singal_wide = singal_wide;
        ui->spinBox_repeat->setMinimum(last_singal_wide + 100);
        ui->spinBox_repeat->setValue(last_singal_wide + 200);
    }

    if(singal_wide > ui->spinBox_repeat->value()){
        ui->spinBox_repeat->setValue(singal_wide + 200);
    }

    serial->write(data,22);
}

char MainWindow::crc8_maxim(uint8_t *ptr, uint8_t len)
{
    int i=0;
    uint8_t crc=0x00;
    uint8_t pDataBuf=0;
    while(len--)
    {
        if(*ptr == 0){
            ptr++;
            continue;
        }
        pDataBuf=*ptr++;
        for(i=0;i<8;i++){
            if((crc^(pDataBuf))&0x01){
                crc^=0x18;
                crc>>=1;
                crc|=0x80;
            } else {
                crc>>=1;
            }
            pDataBuf>>=1;
        }
    }
    return crc;
}

void MainWindow::on_pushButton_scan_clicked()
{
    RefreshTheUSBList();
}

void MainWindow::RefreshTheUSBList( void )
{
    QString portName;
    QString uartName;
    QSerialPortInfo info;
    ui->comboBox_serialPort->clear();

    qDebug() << "Debug: Refresh the list...";
    foreach ( info , QSerialPortInfo::availablePorts()) {
        serial->setPort(info);
        portName = info.portName();
        uartName = info.description();
        ui->comboBox_serialPort->addItem(  portName +",(" +uartName+") "   );
        qDebug() << tr("SYSTEM: Scan the uart device: ")+uartName + "("+portName+")"+tr(" has been added to the available list! ");
    }
}

void MainWindow::on_pushButton_close_clicked()
{
    serial->close();
    ui->pushButton_open->setEnabled( true );
    ui->pushButton_close->setEnabled(false);
    ui->pushButton_send->setEnabled(false);
    ui->pushButton_scan->setEnabled(true);
    ui->comboBox_serialPort->setEnabled(true);
    //    ui->statusbar->showMessage("No Port is Connected!");
    ui->checkBox_repeat->setChecked(false);
    ui->checkBox_repeat->setDisabled(true);
    repeatSendTimer->stop();
}

void MainWindow::on_spinBox_repeat_valueChanged(int arg1)
{
    if( ui->checkBox_repeat->isChecked() ) {

        repeatSendTimer->start( arg1 );
        qDebug() << "CheckBox value changed:" << arg1;

    }else {
        return;
    }
}

void MainWindow::SoftAutoWriteUart()
{
    on_pushButton_send_clicked();
}

void MainWindow::on_checkBox_repeat_clicked(bool checked)
{
    repeatSend = checked;
    if( repeatSend == true ) {
        repeatSendTimer->start( ui->spinBox_repeat->text().toUInt()  );
    }else{
        repeatSendTimer->stop();
    }
}
