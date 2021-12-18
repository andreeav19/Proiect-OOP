//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_PRETBUCATATORT_H
#define PROIECT_OOP_PRETBUCATATORT_H


#include <vector>
#include "tort.h"

// Calculul pretului in functie de aromele fiecarui strat
float calculArome(float pretBucata, int nrStraturi, const std::vector<aromeBlat>& straturi);

// Calculul pretului in functie de decoratiuni
float calculDecor(float pretBucata, const std::vector<decoratiuni>& decor);

// Calculul pretului in functie de cremaT
float calculCrema(float pretBucata, const cremeTort &cremaTort);


#endif //PROIECT_OOP_PRETBUCATATORT_H
