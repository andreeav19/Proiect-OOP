//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_COFETAR_H
#define PROIECT_OOP_COFETAR_H


#include <string>
#include "angajat.h"

class Cofetar : public Angajat{
    int nrPrajituri;    // numarul de prajituri facute intr-o zi

public:
    Cofetar();
    Cofetar(const std::string &nume_, const std::string &prenume_, int salariu_, int oreZi_, int nrPraji);
    Cofetar(const Cofetar &copie);
    Cofetar& operator=(const Cofetar &copie);
    ~Cofetar() override;

    friend std::ostream &operator<<(std::ostream &os, const Cofetar &cofetar);
};


#endif //PROIECT_OOP_COFETAR_H
