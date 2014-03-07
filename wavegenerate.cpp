#include "wavegenerate.h"

WaveGenerate::WaveGenerate()
{
    waveParaInit();
}

int WaveGenerate::waveParaInit(void)
{
    waveName[0].append("-UserDefined-");
    waveName[1].append("Sin");
    waveName[2].append("Triangular");
    waveName[3].append("Sawtooth");
    waveName[4].append("Square");

    return 0;
}

