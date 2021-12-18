//
// Created by Andreea on 12/18/2021.
//

#include "pretBucataBriosa.h"

float calculAroma(float pretBucata, const aromeBriosa& aroma)
{
    switch (aroma) {
        case aromeBriosa::CIOCOLATA:
            return pretBucata;
        case aromeBriosa::PORTOCALE:
            return pretBucata + 2;
        case aromeBriosa::CIOCOLATA_ROM:
            return pretBucata + 0.5;
        case aromeBriosa::LAMAIE:
            return pretBucata + 1.5;
        case aromeBriosa::VANILIE:
            return pretBucata - 1;
    }
}

float calculSprinkles(float pretBucata, const sprinklesBriosa& sprinkles)
{
    switch (sprinkles) {
        case sprinklesBriosa::FARA_SPRINKLES:
            return pretBucata;
        case sprinklesBriosa::SPRINKLES_CIOCOLATA:
            return pretBucata + 0.2;
        case sprinklesBriosa::SPRINKLES_COLORATE:
            return pretBucata + 0.3;
        case sprinklesBriosa::SPRINKLES_STELUTE:
            return pretBucata + 0.4;
    }
}

float calculCrema(float pretBucata, const cremeBriosa& crema)
{
    switch (crema) {
        case cremeBriosa::FARA_CREMA:
            return pretBucata;
        case cremeBriosa::VANILIE:
            return pretBucata + 1;
        case cremeBriosa::CIOCOLATA:
            return pretBucata + 1.5;
        case cremeBriosa::LAMAIE:
            return pretBucata + 2;
        case cremeBriosa::CAPSUNE:
            return pretBucata + 2.5;
        case cremeBriosa::ZMEURA:
            return pretBucata + 2.8;
    }
}