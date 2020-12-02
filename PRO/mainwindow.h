#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QDebug>
#include <QMessageBox>
#include <QSerialPortInfo>
#include <QTimer>


#define                     CONFIG_BAUDRATE_1200_INDEX             0
#define                     CONFIG_BAUDRATE_2400_INDEX             1
#define                     CONFIG_BAUDRATE_4800_INDEX             2
#define                     CONFIG_BAUDRATE_9600_INDEX             3
#define                     CONFIG_BAUDRATE_19200_INDEX            4
#define                     CONFIG_BAUDRATE_38400_INDEX            5
#define                     CONFIG_BAUDRATE_57600_INDEX            6
#define                     CONFIG_BAUDRATE_115200_INDEX           7

#define                     CONFIG_STOPBIT_ONE_INDEX               0
#define                     CONFIG_STOPBIT_ONEANDHALF_INDEX        1
#define                     CONFIG_STOPBIT_TWO_INDEX               2

#define                     CONFIG_PARITY_NONE_INDEX               0
#define                     CONFIG_PARITY_EVEN_INDEX               1
#define                     CONFIG_PARITY_ODD_INDEX                2
#define                     CONFIG_PARITY_SPACE_INDEX              3
#define                     CONFIG_PARITY_MARK_INDEX               4

#define                     CONFIG_FLOWCTRL_NONE_INDEX             0
#define                     CONFIG_FLOWCTRL_HARD_INDEX             1
#define                     CONFIG_FLOWCTRL_SOFT_INDEX             2

#define                     CONFIG_DATABITS_5_INDEX                 0
#define                     CONFIG_DATABITS_6_INDEX                 1
#define                     CONFIG_DATABITS_7_INDEX                 2
#define                     CONFIG_DATABITS_8_INDEX                 3


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_scan_clicked();

    void on_pushButton_close_clicked();

    void on_spinBox_repeat_valueChanged(int arg1);

    void on_checkBox_repeat_clicked(bool checked);

    void SoftAutoWriteUart();

private:
    void RefreshTheUSBList( void );
    void protocol_bfsk();
    void protocol_qfsk();



private:
    QSerialPort *serial;
    QString currentConnectCom;
    QTimer *repeatSendTimer;

    bool repeatSend;
    quint16 last_singal_wide;
    quint16 singal_wide;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
