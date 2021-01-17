#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_touchspin = new QTouchSpins(this);
    m_touchspin->setStep(1);
    m_touchspin->setMinMax(0,59);
    m_touchspin->setCurrent(0);
    m_touchspin->setNumbersShow(3);
    m_touchspin->setGeometry(10,10,70,125);

    //connect(m_touchspin,&QTouchSpins::changecurr,ui->currlabel ,&QLabel::setText);
    //connect(m_touchspin,&QTouchSpins::changedy,ui->dylabel ,&QLabel::setText);
    //ui->horizontalLayout->addWidget(m_touchspin);
}

MainWindow::~MainWindow()
{
    delete m_touchspin;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
}
