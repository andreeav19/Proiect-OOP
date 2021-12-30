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
    Curier(const std::string &nume_, const std::string &prenume_, int salariu_, int oreZi_,
           int idComanda, const std::string &nrInm);
    Curier(const Curier &copie);
    Curier& operator=(const Curier &copie);
    ~Curier() override;

    friend std::ostream &operator<<(std::ostream &os, const Curier &curier);
};


#endif //PROIECT_OOP_CURIER_H
