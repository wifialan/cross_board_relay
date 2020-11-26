/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *comboBox_serialPort;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox_databits;
    QComboBox *comboBox_stopbits;
    QComboBox *comboBox_baudrate;
    QComboBox *comboBox_flowctrl;
    QComboBox *comboBox_checkdigit;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_scan;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QLabel *DataBits;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTabWidget *tabWidget;
    QWidget *tab_BFSK;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_23;
    QLabel *label_21;
    QLineEdit *lineEdit_bfsk_data;
    QLabel *label_27;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_24;
    QLineEdit *lineEdit_bfsk_sync_time_gap;
    QLabel *label_28;
    QLineEdit *lineEdit_data_tail_bfsk;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_25;
    QLineEdit *lineEdit_bfsk_symbol_wide;
    QLabel *label_29;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_26;
    QLineEdit *lineEdit_bfsk_freq_2;
    QLabel *label_30;
    QLineEdit *lineEdit_data_header_bfsk;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_27;
    QLineEdit *lineEdit_bfsk_freq_1;
    QLabel *label_31;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_28;
    QLineEdit *lineEdit_bfsk_sync_freq;
    QLabel *label_32;
    QWidget *tab_QFSK;
    QLineEdit *lineEdit_data_tail_qfsk;
    QWidget *layoutWidget_10;
    QGridLayout *gridLayout_39;
    QLineEdit *lineEdit_qfsk_sync_time_gap;
    QLabel *label_42;
    QWidget *layoutWidget_11;
    QGridLayout *gridLayout_43;
    QLineEdit *lineEdit_qfsk_freq_1;
    QLineEdit *lineEdit_qfsk_freq_2;
    QLineEdit *lineEdit_qfsk_freq_3;
    QLineEdit *lineEdit_qfsk_freq_4;
    QWidget *layoutWidget_13;
    QGridLayout *gridLayout_44;
    QLineEdit *lineEdit_qfsk_sync_freq;
    QLabel *label_45;
    QLineEdit *lineEdit_data_header_qfsk;
    QWidget *layoutWidget_14;
    QGridLayout *gridLayout_45;
    QLabel *label_43;
    QLineEdit *lineEdit_qfsk_data;
    QWidget *layoutWidget_15;
    QGridLayout *gridLayout_46;
    QLineEdit *lineEdit_qfsk_symbol_wide;
    QLabel *label_46;
    QLabel *label_47;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_42;
    QGridLayout *gridLayout_41;
    QPushButton *pushButton_send;
    QGridLayout *gridLayout_10;
    QSpinBox *spinBox_repeat;
    QLabel *label_13;
    QCheckBox *checkBox_repeat;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1190, 250);
        MainWindow->setMinimumSize(QSize(1190, 250));
        MainWindow->setMaximumSize(QSize(1190, 250));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 336, 199));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        comboBox_serialPort = new QComboBox(groupBox);
        comboBox_serialPort->addItem(QString());
        comboBox_serialPort->setObjectName(QString::fromUtf8("comboBox_serialPort"));
        comboBox_serialPort->setMinimumSize(QSize(264, 0));
        comboBox_serialPort->setMaximumSize(QSize(264, 16777215));

        gridLayout_3->addWidget(comboBox_serialPort, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_databits = new QComboBox(groupBox);
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->addItem(QString());
        comboBox_databits->setObjectName(QString::fromUtf8("comboBox_databits"));

        gridLayout->addWidget(comboBox_databits, 1, 0, 1, 1);

        comboBox_stopbits = new QComboBox(groupBox);
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->addItem(QString());
        comboBox_stopbits->setObjectName(QString::fromUtf8("comboBox_stopbits"));

        gridLayout->addWidget(comboBox_stopbits, 3, 0, 1, 1);

        comboBox_baudrate = new QComboBox(groupBox);
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->addItem(QString());
        comboBox_baudrate->setObjectName(QString::fromUtf8("comboBox_baudrate"));

        gridLayout->addWidget(comboBox_baudrate, 0, 0, 1, 1);

        comboBox_flowctrl = new QComboBox(groupBox);
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->addItem(QString());
        comboBox_flowctrl->setObjectName(QString::fromUtf8("comboBox_flowctrl"));

        gridLayout->addWidget(comboBox_flowctrl, 5, 0, 1, 1);

        comboBox_checkdigit = new QComboBox(groupBox);
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->addItem(QString());
        comboBox_checkdigit->setObjectName(QString::fromUtf8("comboBox_checkdigit"));

        gridLayout->addWidget(comboBox_checkdigit, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 5, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_scan = new QPushButton(groupBox);
        pushButton_scan->setObjectName(QString::fromUtf8("pushButton_scan"));
        pushButton_scan->setMinimumSize(QSize(161, 41));
        pushButton_scan->setMaximumSize(QSize(161, 41));

        gridLayout_2->addWidget(pushButton_scan, 0, 0, 1, 1);

        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setMinimumSize(QSize(161, 41));
        pushButton_open->setMaximumSize(QSize(161, 41));

        gridLayout_2->addWidget(pushButton_open, 1, 0, 1, 1);

        pushButton_close = new QPushButton(groupBox);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(161, 41));
        pushButton_close->setMaximumSize(QSize(161, 41));

        gridLayout_2->addWidget(pushButton_close, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 2, 5, 1);

        DataBits = new QLabel(groupBox);
        DataBits->setObjectName(QString::fromUtf8("DataBits"));

        gridLayout_3->addWidget(DataBits, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(360, 20, 803, 93));
        tab_BFSK = new QWidget();
        tab_BFSK->setObjectName(QString::fromUtf8("tab_BFSK"));
        layoutWidget = new QWidget(tab_BFSK);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(576, 37, 95, 25));
        gridLayout_23 = new QGridLayout(layoutWidget);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 21));
        label_21->setMaximumSize(QSize(16777215, 21));

        gridLayout_23->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_bfsk_data = new QLineEdit(layoutWidget);
        lineEdit_bfsk_data->setObjectName(QString::fromUtf8("lineEdit_bfsk_data"));
        lineEdit_bfsk_data->setMinimumSize(QSize(71, 23));
        lineEdit_bfsk_data->setMaximumSize(QSize(71, 23));

        gridLayout_23->addWidget(lineEdit_bfsk_data, 0, 1, 1, 1);

        label_27 = new QLabel(tab_BFSK);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(6, 10, 781, 21));
        layoutWidget_2 = new QWidget(tab_BFSK);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(221, 39, 65, 23));
        gridLayout_24 = new QGridLayout(layoutWidget_2);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        lineEdit_bfsk_sync_time_gap = new QLineEdit(layoutWidget_2);
        lineEdit_bfsk_sync_time_gap->setObjectName(QString::fromUtf8("lineEdit_bfsk_sync_time_gap"));
        lineEdit_bfsk_sync_time_gap->setMinimumSize(QSize(41, 0));
        lineEdit_bfsk_sync_time_gap->setMaximumSize(QSize(41, 16777215));

        gridLayout_24->addWidget(lineEdit_bfsk_sync_time_gap, 0, 0, 1, 1);

        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_24->addWidget(label_28, 0, 1, 1, 1);

        lineEdit_data_tail_bfsk = new QLineEdit(tab_BFSK);
        lineEdit_data_tail_bfsk->setObjectName(QString::fromUtf8("lineEdit_data_tail_bfsk"));
        lineEdit_data_tail_bfsk->setGeometry(QRect(699, 37, 81, 23));
        lineEdit_data_tail_bfsk->setMinimumSize(QSize(81, 0));
        lineEdit_data_tail_bfsk->setMaximumSize(QSize(81, 16777215));
        layoutWidget_3 = new QWidget(tab_BFSK);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(487, 39, 65, 23));
        gridLayout_25 = new QGridLayout(layoutWidget_3);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        lineEdit_bfsk_symbol_wide = new QLineEdit(layoutWidget_3);
        lineEdit_bfsk_symbol_wide->setObjectName(QString::fromUtf8("lineEdit_bfsk_symbol_wide"));
        lineEdit_bfsk_symbol_wide->setMinimumSize(QSize(41, 0));
        lineEdit_bfsk_symbol_wide->setMaximumSize(QSize(41, 16777215));

        gridLayout_25->addWidget(lineEdit_bfsk_symbol_wide, 0, 0, 1, 1);

        label_29 = new QLabel(layoutWidget_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_25->addWidget(label_29, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(tab_BFSK);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(396, 38, 65, 23));
        gridLayout_26 = new QGridLayout(layoutWidget_4);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        lineEdit_bfsk_freq_2 = new QLineEdit(layoutWidget_4);
        lineEdit_bfsk_freq_2->setObjectName(QString::fromUtf8("lineEdit_bfsk_freq_2"));
        lineEdit_bfsk_freq_2->setMinimumSize(QSize(41, 0));
        lineEdit_bfsk_freq_2->setMaximumSize(QSize(41, 16777215));

        gridLayout_26->addWidget(lineEdit_bfsk_freq_2, 0, 0, 1, 1);

        label_30 = new QLabel(layoutWidget_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_26->addWidget(label_30, 0, 1, 1, 1);

        lineEdit_data_header_bfsk = new QLineEdit(tab_BFSK);
        lineEdit_data_header_bfsk->setObjectName(QString::fromUtf8("lineEdit_data_header_bfsk"));
        lineEdit_data_header_bfsk->setGeometry(QRect(16, 37, 81, 23));
        lineEdit_data_header_bfsk->setMinimumSize(QSize(81, 0));
        lineEdit_data_header_bfsk->setMaximumSize(QSize(81, 16777215));
        layoutWidget_5 = new QWidget(tab_BFSK);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(316, 38, 65, 23));
        gridLayout_27 = new QGridLayout(layoutWidget_5);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        lineEdit_bfsk_freq_1 = new QLineEdit(layoutWidget_5);
        lineEdit_bfsk_freq_1->setObjectName(QString::fromUtf8("lineEdit_bfsk_freq_1"));
        lineEdit_bfsk_freq_1->setMinimumSize(QSize(41, 21));
        lineEdit_bfsk_freq_1->setMaximumSize(QSize(41, 16777215));

        gridLayout_27->addWidget(lineEdit_bfsk_freq_1, 0, 0, 1, 1);

        label_31 = new QLabel(layoutWidget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_27->addWidget(label_31, 0, 1, 1, 1);

        layoutWidget_6 = new QWidget(tab_BFSK);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(120, 38, 65, 23));
        gridLayout_28 = new QGridLayout(layoutWidget_6);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        lineEdit_bfsk_sync_freq = new QLineEdit(layoutWidget_6);
        lineEdit_bfsk_sync_freq->setObjectName(QString::fromUtf8("lineEdit_bfsk_sync_freq"));
        lineEdit_bfsk_sync_freq->setMinimumSize(QSize(41, 0));
        lineEdit_bfsk_sync_freq->setMaximumSize(QSize(41, 16777215));

        gridLayout_28->addWidget(lineEdit_bfsk_sync_freq, 0, 0, 1, 1);

        label_32 = new QLabel(layoutWidget_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_28->addWidget(label_32, 0, 1, 1, 1);

        tabWidget->addTab(tab_BFSK, QString());
        tab_QFSK = new QWidget();
        tab_QFSK->setObjectName(QString::fromUtf8("tab_QFSK"));
        lineEdit_data_tail_qfsk = new QLineEdit(tab_QFSK);
        lineEdit_data_tail_qfsk->setObjectName(QString::fromUtf8("lineEdit_data_tail_qfsk"));
        lineEdit_data_tail_qfsk->setGeometry(QRect(713, 40, 81, 23));
        lineEdit_data_tail_qfsk->setMinimumSize(QSize(81, 0));
        lineEdit_data_tail_qfsk->setMaximumSize(QSize(81, 16777215));
        layoutWidget_10 = new QWidget(tab_QFSK);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(197, 40, 65, 23));
        gridLayout_39 = new QGridLayout(layoutWidget_10);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_39->setContentsMargins(0, 0, 0, 0);
        lineEdit_qfsk_sync_time_gap = new QLineEdit(layoutWidget_10);
        lineEdit_qfsk_sync_time_gap->setObjectName(QString::fromUtf8("lineEdit_qfsk_sync_time_gap"));
        lineEdit_qfsk_sync_time_gap->setMinimumSize(QSize(41, 0));
        lineEdit_qfsk_sync_time_gap->setMaximumSize(QSize(41, 16777215));

        gridLayout_39->addWidget(lineEdit_qfsk_sync_time_gap, 0, 0, 1, 1);

        label_42 = new QLabel(layoutWidget_10);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_39->addWidget(label_42, 0, 1, 1, 1);

        layoutWidget_11 = new QWidget(tab_QFSK);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(273, 40, 251, 23));
        gridLayout_43 = new QGridLayout(layoutWidget_11);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        gridLayout_43->setContentsMargins(0, 0, 0, 0);
        lineEdit_qfsk_freq_1 = new QLineEdit(layoutWidget_11);
        lineEdit_qfsk_freq_1->setObjectName(QString::fromUtf8("lineEdit_qfsk_freq_1"));
        lineEdit_qfsk_freq_1->setMinimumSize(QSize(41, 21));
        lineEdit_qfsk_freq_1->setMaximumSize(QSize(41, 16777215));

        gridLayout_43->addWidget(lineEdit_qfsk_freq_1, 0, 0, 1, 1);

        lineEdit_qfsk_freq_2 = new QLineEdit(layoutWidget_11);
        lineEdit_qfsk_freq_2->setObjectName(QString::fromUtf8("lineEdit_qfsk_freq_2"));
        lineEdit_qfsk_freq_2->setMinimumSize(QSize(41, 0));
        lineEdit_qfsk_freq_2->setMaximumSize(QSize(41, 16777215));

        gridLayout_43->addWidget(lineEdit_qfsk_freq_2, 0, 1, 1, 1);

        lineEdit_qfsk_freq_3 = new QLineEdit(layoutWidget_11);
        lineEdit_qfsk_freq_3->setObjectName(QString::fromUtf8("lineEdit_qfsk_freq_3"));
        lineEdit_qfsk_freq_3->setMinimumSize(QSize(41, 21));
        lineEdit_qfsk_freq_3->setMaximumSize(QSize(41, 16777215));

        gridLayout_43->addWidget(lineEdit_qfsk_freq_3, 0, 2, 1, 1);

        lineEdit_qfsk_freq_4 = new QLineEdit(layoutWidget_11);
        lineEdit_qfsk_freq_4->setObjectName(QString::fromUtf8("lineEdit_qfsk_freq_4"));
        lineEdit_qfsk_freq_4->setMinimumSize(QSize(41, 0));
        lineEdit_qfsk_freq_4->setMaximumSize(QSize(41, 16777215));

        gridLayout_43->addWidget(lineEdit_qfsk_freq_4, 0, 3, 1, 1);

        layoutWidget_13 = new QWidget(tab_QFSK);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(111, 40, 65, 23));
        gridLayout_44 = new QGridLayout(layoutWidget_13);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        lineEdit_qfsk_sync_freq = new QLineEdit(layoutWidget_13);
        lineEdit_qfsk_sync_freq->setObjectName(QString::fromUtf8("lineEdit_qfsk_sync_freq"));
        lineEdit_qfsk_sync_freq->setMinimumSize(QSize(41, 0));
        lineEdit_qfsk_sync_freq->setMaximumSize(QSize(41, 16777215));

        gridLayout_44->addWidget(lineEdit_qfsk_sync_freq, 0, 0, 1, 1);

        label_45 = new QLabel(layoutWidget_13);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_44->addWidget(label_45, 0, 1, 1, 1);

        lineEdit_data_header_qfsk = new QLineEdit(tab_QFSK);
        lineEdit_data_header_qfsk->setObjectName(QString::fromUtf8("lineEdit_data_header_qfsk"));
        lineEdit_data_header_qfsk->setGeometry(QRect(5, 40, 81, 23));
        lineEdit_data_header_qfsk->setMinimumSize(QSize(81, 0));
        lineEdit_data_header_qfsk->setMaximumSize(QSize(81, 16777215));
        layoutWidget_14 = new QWidget(tab_QFSK);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(612, 39, 95, 25));
        gridLayout_45 = new QGridLayout(layoutWidget_14);
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_45->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(layoutWidget_14);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setMinimumSize(QSize(0, 21));
        label_43->setMaximumSize(QSize(16777215, 21));

        gridLayout_45->addWidget(label_43, 0, 0, 1, 1);

        lineEdit_qfsk_data = new QLineEdit(layoutWidget_14);
        lineEdit_qfsk_data->setObjectName(QString::fromUtf8("lineEdit_qfsk_data"));
        lineEdit_qfsk_data->setMinimumSize(QSize(71, 23));
        lineEdit_qfsk_data->setMaximumSize(QSize(71, 23));

        gridLayout_45->addWidget(lineEdit_qfsk_data, 0, 1, 1, 1);

        layoutWidget_15 = new QWidget(tab_QFSK);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(531, 40, 65, 23));
        gridLayout_46 = new QGridLayout(layoutWidget_15);
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        gridLayout_46->setContentsMargins(0, 0, 0, 0);
        lineEdit_qfsk_symbol_wide = new QLineEdit(layoutWidget_15);
        lineEdit_qfsk_symbol_wide->setObjectName(QString::fromUtf8("lineEdit_qfsk_symbol_wide"));
        lineEdit_qfsk_symbol_wide->setMinimumSize(QSize(41, 0));
        lineEdit_qfsk_symbol_wide->setMaximumSize(QSize(41, 16777215));

        gridLayout_46->addWidget(lineEdit_qfsk_symbol_wide, 0, 0, 1, 1);

        label_46 = new QLabel(layoutWidget_15);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_46->addWidget(label_46, 0, 1, 1, 1);

        label_47 = new QLabel(tab_QFSK);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(0, 10, 801, 21));
        tabWidget->addTab(tab_QFSK, QString());
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(360, 120, 801, 84));
        gridLayout_42 = new QGridLayout(layoutWidget1);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        gridLayout_41 = new QGridLayout();
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        pushButton_send = new QPushButton(layoutWidget1);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setMinimumSize(QSize(221, 51));
        pushButton_send->setMaximumSize(QSize(221, 51));

        gridLayout_41->addWidget(pushButton_send, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        spinBox_repeat = new QSpinBox(layoutWidget1);
        spinBox_repeat->setObjectName(QString::fromUtf8("spinBox_repeat"));
        spinBox_repeat->setMaximum(999999);
        spinBox_repeat->setValue(1000);

        gridLayout_10->addWidget(spinBox_repeat, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 0, 2, 1, 1);

        checkBox_repeat = new QCheckBox(layoutWidget1);
        checkBox_repeat->setObjectName(QString::fromUtf8("checkBox_repeat"));

        gridLayout_10->addWidget(checkBox_repeat, 0, 0, 1, 1);


        gridLayout_41->addLayout(gridLayout_10, 1, 0, 1, 1);


        gridLayout_42->addLayout(gridLayout_41, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(layoutWidget1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(570, 81));
        textBrowser->setMaximumSize(QSize(570, 81));

        gridLayout_42->addWidget(textBrowser, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1190, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\351\205\215\347\275\256\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        comboBox_serialPort->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        comboBox_databits->setItemText(0, QCoreApplication::translate("MainWindow", "5 Bits", nullptr));
        comboBox_databits->setItemText(1, QCoreApplication::translate("MainWindow", "6 Bits", nullptr));
        comboBox_databits->setItemText(2, QCoreApplication::translate("MainWindow", "7 Bits", nullptr));
        comboBox_databits->setItemText(3, QCoreApplication::translate("MainWindow", "8 Bits", nullptr));

        comboBox_stopbits->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_stopbits->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        comboBox_stopbits->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        comboBox_baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboBox_baudrate->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboBox_baudrate->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboBox_baudrate->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baudrate->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_baudrate->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_baudrate->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_baudrate->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));

        comboBox_flowctrl->setItemText(0, QCoreApplication::translate("MainWindow", "Disable", nullptr));
        comboBox_flowctrl->setItemText(1, QCoreApplication::translate("MainWindow", "Hardware", nullptr));
        comboBox_flowctrl->setItemText(2, QCoreApplication::translate("MainWindow", "Software", nullptr));

        comboBox_checkdigit->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_checkdigit->setItemText(1, QCoreApplication::translate("MainWindow", "Even", nullptr));
        comboBox_checkdigit->setItemText(2, QCoreApplication::translate("MainWindow", "Odd", nullptr));
        comboBox_checkdigit->setItemText(3, QCoreApplication::translate("MainWindow", "Space", nullptr));
        comboBox_checkdigit->setItemText(4, QCoreApplication::translate("MainWindow", "Mark", nullptr));

        pushButton_scan->setText(QCoreApplication::translate("MainWindow", "\346\211\253\346\217\217", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        DataBits->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\265\201\346\216\247", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        lineEdit_bfsk_data->setText(QCoreApplication::translate("MainWindow", "1234ABCD", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "|--\346\225\260\346\215\256\345\244\264--|--\345\220\214\346\255\245\345\244\264\351\242\221\347\216\207--|--\345\220\214\346\255\245\351\227\264\351\232\224--|--\351\242\221\347\216\2071--|--\351\242\221\347\216\2072--|--\347\240\201\345\205\203\345\256\275\345\272\246--|--\345\215\201\345\205\255\350\277\233\345\210\266\346\225\260\346\215\256--|--\346\225\260\346\215\256\345\260\276--|", nullptr));
        lineEdit_bfsk_sync_time_gap->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        lineEdit_data_tail_bfsk->setText(QCoreApplication::translate("MainWindow", "0x5B 0xB5", nullptr));
        lineEdit_bfsk_symbol_wide->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        lineEdit_bfsk_freq_2->setText(QCoreApplication::translate("MainWindow", "225", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Hz", nullptr));
        lineEdit_data_header_bfsk->setText(QCoreApplication::translate("MainWindow", "0xA5 0x5A", nullptr));
        lineEdit_bfsk_freq_1->setText(QCoreApplication::translate("MainWindow", "125", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Hz", nullptr));
        lineEdit_bfsk_sync_freq->setText(QCoreApplication::translate("MainWindow", "175", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Hz", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_BFSK), QCoreApplication::translate("MainWindow", "BFSK", nullptr));
        lineEdit_data_tail_qfsk->setText(QCoreApplication::translate("MainWindow", "0x5B 0xB5", nullptr));
        lineEdit_qfsk_sync_time_gap->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        lineEdit_qfsk_freq_1->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        lineEdit_qfsk_freq_2->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        lineEdit_qfsk_freq_3->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        lineEdit_qfsk_freq_4->setText(QCoreApplication::translate("MainWindow", "400", nullptr));
        lineEdit_qfsk_sync_freq->setText(QCoreApplication::translate("MainWindow", "175", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Hz", nullptr));
        lineEdit_data_header_qfsk->setText(QCoreApplication::translate("MainWindow", "0xA5 0x5A", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "0x", nullptr));
        lineEdit_qfsk_data->setText(QCoreApplication::translate("MainWindow", "1234ABCD", nullptr));
        lineEdit_qfsk_symbol_wide->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "|--\346\225\260\346\215\256\345\244\264--|-\345\220\214\346\255\245\345\244\264\351\242\221\347\216\207-|-\345\220\214\346\255\245\351\227\264\351\232\224-|-\351\242\221\347\216\2071-|-\351\242\221\347\216\2072-|-\351\242\221\347\216\2073-|-\351\242\221\347\216\2074-|-\347\240\201\345\205\203\345\256\275\345\272\246-|-\345\215\201\345\205\255\350\277\233\345\210\266\346\225\260\346\215\256-|-\346\225\260\346\215\256\345\260\276-|", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_QFSK), QCoreApplication::translate("MainWindow", "QFSK", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        checkBox_repeat->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\244\215\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
