#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "wavegenerate.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_comboBox_waveSelect_currentIndexChanged(int index);

    void on_pushButton_drawWave_clicked();

private:
    Ui::Widget *ui;
    int generaterInit(void);

    WaveGenerate* waveGen;
};

#endif // WIDGET_H
