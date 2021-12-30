//
// Created by Andreea on 12/18/2021.
//


#include "briosa.h"
#include "pretBucataBriosa.h"

Briosa::Briosa() {
    pretBaza = 3;
    nume = "Briosa";
    timpPreparare = 90;
    numarBucati = 6;
    aroma = {aromeBriosa::VANILIE};
    sprinkles = {sprinklesBriosa::FARA_SPRINKLES};
    crema = {cremeBriosa::VANILIE };
}

Briosa::Briosa(const std::string &nume, const int timp, const int numarB, const aromeBriosa& aromaBriosa,
               const sprinklesBriosa& sprinklesBriosa, const cremeBriosa& cremaBriosa)
        : Prajitura(nume, timp, numarB){
    this->pretBaza = 3;
    this->aroma = aromaBriosa;
    this->sprinkles = sprinklesBriosa;
    this->crema = cremaBriosa;
}

Briosa::Briosa(const Briosa &copie) : Prajitura(copie)  {
    this->aroma = copie.aroma;
    this->sprinkles = copie.sprinkles;
    this->crema = copie.crema;
}

Briosa &Briosa::operator=(const Briosa &copie) {
    if(this != &copie)
    {
        Prajitura::operator=(copie);
        this->aroma = copie.aroma;
        this->sprinkles = copie.sprinkles;
        this->crema = copie.crema;
    }
    return *this;
}

Briosa::~Briosa() {
    std::cout<<"Destructor: class Briosa\n";
}

float Briosa::calculPret() const {
    float pretBucata = pretBaza;

    pretBucata = calculAroma(pretBucata, aroma);
    pretBucata = calculSprinkles(pretBucata, sprinkles);
    pretBucata = calculCrema(pretBucata, crema);

    return pretBucata*numarBucati;
}
