#ifndef QTOUCHSPINS_H
#define QTOUCHSPINS_H

#include <QWidget>
#include <QLabel>
#include <QTime>
#include <QTextEdit>


class QTouchSpins : public QWidget
{
    Q_OBJECT
public:
    //using QTextEdit::QTextEdit;
    explicit QTouchSpins(QWidget *parent = nullptr);
    void setValue(int i);
    void setMinMax(int min, int max);
    void setCurrent(int current);
    void setStep(int step);
    void setNumbersShow(int level);
protected:
    void    mousePressEvent(QMouseEvent *event) override;
    void    mouseMoveEvent(QMouseEvent *e) override;
    void    mouseReleaseEvent(QMouseEvent *e) override;
    void    paintEvent(QPaintEvent *e) override;

    QPoint prev;
    QPoint pstart;
    int mvalue=0;
    int m_min,m_max,m_current;
    int m_step , m_level;
    //QTime mtime;
    //QVector<QString> text;

Q_SIGNALS:
    void MovedUp();
    void MovedDown();
    void changecurr(QString curr);
    void changedy(QString dy);

};

#endif // QTOUCHSPINS_H
