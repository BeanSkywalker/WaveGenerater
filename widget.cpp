#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    generaterInit();
}

Widget::~Widget()
{
    delete ui;
}

int Widget::generaterInit()
{
    waveGen = new WaveGenerate();

    for(int i=0 ; i<WAVE_QUA ; i++)
        ui->comboBox_waveSelect->addItem(waveGen->waveName[i]);
    ui->comboBox_waveSelect->setCurrentIndex(0);
    ui->pushButton_drawWave->setDisabled(1);

    waveGen->wavePara.waveSwitch = 0;
    waveGen->wavePara.resolution = 8;
    waveGen->wavePara.samplingPoints = 1024;
    waveGen->wavePara.format = WAVE_FORMAT_BIN;

    return 0;
}



void Widget::on_comboBox_waveSelect_currentIndexChanged(int index)
{
    if(index != 0)
        ui->pushButton_drawWave->setDisabled(0);
    else
        ui->pushButton_drawWave->setDisabled(1);

    waveGen->wavePara.waveSwitch = index;
}

void Widget::on_pushButton_drawWave_clicked()
{

}
