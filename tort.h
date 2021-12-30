//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_TORT_H
#define PROIECT_OOP_TORT_H


#include "prajitura.h"
#include <vector>

enum class aromeBlat { CIOCOLATA, CAFEA_CIOCOLATA, ROM_CIOCOLATA, VANILIE, MORCOVI};
enum class decoratiuni { FARA_DECOR, SPRINKLES, FRISCA, FRUCTE, MARTIPAN};
enum class cremeTort { CAPSUNE, CIOCOLATA_CREMA, VANILIE_CREMA};

class Tort : public Prajitura {
    int nrStraturi;
    std::vector<aromeBlat> straturi;    //pentru fiecare strat pot exista arome diferite
    std::vector<decoratiuni> decor;
    cremeTort crema;

public:
    Tort();
    Tort(const std::string& nume, int timp, int numarB,
         int nrStrat, const std::vector<aromeBlat> &arome, const std::vector<decoratiuni> &dec, const cremeTort& cremaT);
    Tort(const Tort& copie);
    Tort& operator=(const Tort& copie);
    ~Tort() override;

    float calculPret() const override;
};


#endif //PROIECT_OOP_TORT_H
