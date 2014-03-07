#ifndef DRAWWAVEDIA_H
#define DRAWWAVEDIA_H

#include <QWidget>

namespace Ui {
class drawWaveDia;
}

class drawWaveDia : public QWidget
{
    Q_OBJECT
    
public:
    explicit drawWaveDia(QWidget *parent = 0);
    ~drawWaveDia();
    
private:
    Ui::drawWaveDia *ui;
};

#endif // DRAWWAVEDIA_H
