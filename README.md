# QTouchSpinBox
QTouchSpinBox is a widget similar to the Android native numberpicker in qt.

use this object in other widget and qform : 


    MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)   
    {
        ui->setupUi(this);
        m_touchspin = new QTouchSpins(this);
        m_touchspin->setStep(1);                 // Specify the steps of the displayed numbers
        m_touchspin->setMinMax(0,59);            // Determine the maximum and minimum numbers
        m_touchspin->setCurrent(0);              // Specify the current selected number
        m_touchspin->setNumbersShow(3);          // How many numbers should be displayed?
        m_touchspin->setGeometry(10,10,70,125);  // Locate widgets
    }

