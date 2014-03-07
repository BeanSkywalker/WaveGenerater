#include "drawwavedia.h"
#include "ui_drawwavedia.h"

drawWaveDia::drawWaveDia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::drawWaveDia)
{
    ui->setupUi(this);
}

drawWaveDia::~drawWaveDia()
{
    delete ui;
}
