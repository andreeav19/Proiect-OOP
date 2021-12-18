//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_CURIER_H
#define PROIECT_OOP_CURIER_H


#include "angajat.h"

class Curier : public Angajat{
    int id_comanda;
    std::string nrInmatriculare;

public:
    Curier();
    Curier(const std::string &nume_, const std::string &prenume_, const int &salariu_, const int &oreZi_,
           const int &idComanda, const std::string &nrInm);
    Curier(const Curier &copie);
    Curier& operator=(const Curier &copie);
    ~Curier();

    friend std::ostream &operator<<(std::ostream &os, const Curier &curier);
};


#endif //PROIECT_OOP_CURIER_H
