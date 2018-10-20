#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScrollArea>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void showEvent(QShowEvent *);

private:
    Ui::Widget *ui;
    QScrollArea *m_pScrollArea;
};

#endif // WIDGET_H
