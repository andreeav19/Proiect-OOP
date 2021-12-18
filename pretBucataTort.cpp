//
// Created by Andreea on 12/18/2021.
//

#include "pretBucataTort.h"

float calculArome(float pretBucata, const int nrStraturi, const std::vector<aromeBlat>& straturi)
{
    for(int i=0; i<nrStraturi; i++)
    {
        switch(straturi[i]){
            case aromeBlat::CIOCOLATA:
                pretBucata+=5;
                break;
            case aromeBlat::CAFEA_CIOCOLATA:
                pretBucata+=6.5;
                break;
            case aromeBlat::ROM_CIOCOLATA:
                pretBucata+=6;
                break;
            case aromeBlat::VANILIE:
                pretBucata+=4.5;
                break;
            case aromeBlat::MORCOVI:
                pretBucata+=4;
                break;
        }
    }

    return pretBucata;
}

float calculDecor(float pretBucata, const std::vector<decoratiuni>& decor)
{
    unsigned int nrDecor = decor.size();
    for(int i=0; i<nrDecor; i++)
    {
        switch (decor[i]) {
            case decoratiuni::FARA_DECOR:
                return pretBucata;
            case decoratiuni::SPRINKLES:
                pretBucata += 0.5;
                break;
            case decoratiuni::FRISCA:
                pretBucata += 5.5;
                break;
            case decoratiuni::FRUCTE:
                pretBucata += 6;
                break;
            case decoratiuni::MARTIPAN:
                pretBucata += 8;
                break;

        }
    }

    return pretBucata;
}

float calculCrema(float pretBucata, const cremeTort &cremaTort)
{
    switch (cremaTort) {
        case cremeTort::CAPSUNE:
            pretBucata += 6;
            break;
        case cremeTort::CIOCOLATA_CREMA:
            pretBucata += 5.5;
            break;
        case cremeTort::VANILIE_CREMA:
            pretBucata += 5;
            break;
    }
    return pretBucata;
}