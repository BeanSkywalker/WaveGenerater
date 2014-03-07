#ifndef WAVEGENERATE_H
#define WAVEGENERATE_H

#include <QString>

#define WAVE_QUA 5  //wave quantity
#define WAVE_FORMAT_BIN 0   //define wave format
#define WAVE_FORMAT_HEX 1
#define WAVE_FORMAT_MIF 2

class WaveGenerate
{
public:
    WaveGenerate();

    QString waveName[WAVE_QUA];

    struct _WAVEPARA
    {
        int waveSwitch;
        int samplingPoints;
        int resolution;
        int format;
    }wavePara;

private:
    int waveParaInit(void);

};

#endif // WAVEGENERATE_H
