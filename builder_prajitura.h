//
// Created by Andreea on 1/2/2022.
//

#ifndef PROIECT_OOP_BUILDER_PRAJITURA_H
#define PROIECT_OOP_BUILDER_PRAJITURA_H

#include "prajitura.h"

class builder_prajitura {
private:
    Prajitura prajitura;
public:
    builder_prajitura() = default;

    builder_prajitura& nume(const std::string& n) {
        prajitura.nume = n;
        return *this;
    }
    builder_prajitura& timpPreparare(int t) {
        prajitura.timpPreparare = t;
        return *this;
    }
    builder_prajitura& numarBucati(int nr) {
        prajitura.numarBucati = nr;
        return *this;
    }
    builder_prajitura& pretBaza(float pret) {
        prajitura.pretBaza = pret;
        return *this;
    }

    Prajitura build() {
        Prajitura prajitura_noua;
        prajitura_noua = prajitura;     // Pentru a asigura numerotarea corecta a id-urilor
        return prajitura_noua;
    }
};


#endif //PROIECT_OOP_BUILDER_PRAJITURA_H
