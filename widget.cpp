#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QHBoxLayout * hlayout = new QHBoxLayout;
    m_pScrollArea = new QScrollArea(this);
    m_pScrollArea->setBackgroundRole(QPalette::Dark);
    hlayout->addWidget(m_pScrollArea);
    hlayout->setContentsMargins(0,0,0,0);
    this->setLayout(hlayout);
    QWidget *wdg = new QWidget;
    wdg->resize(1000,2000);
    m_pScrollArea->setWidget(wdg);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::showEvent(QShowEvent *)
{

}
