//
// Created by Andreea on 12/18/2021.
//

#include "tort.h"
#include "pretBucataTort.h"
#include "exceptii.h"

Tort::Tort() : Prajitura(){
    nume = "tort";
    nrStraturi = 1;
    pretBaza = 50;
    straturi.push_back(aromeBlat::CIOCOLATA);   // pentru un singur strat este nevoie de o singura aroma
    decor.push_back(decoratiuni::FARA_DECOR);
    crema = cremeTort::CIOCOLATA_CREMA;
}

Tort::Tort(const std::string& nume, const int timp, const int numarB,
           const int nrStrat, const std::vector<aromeBlat> &arome, const std::vector<decoratiuni> &dec, const cremeTort& cremaT)
        : Prajitura(nume, timp, numarB){
    if(nrStrat != arome.size())
        throw std::runtime_error("Numarul de straturi nu coincide cu numarul de arome.");
    if(dec[0] == decoratiuni::FARA_DECOR && dec.size()>1)
        throw eroare_decor();
    else{
        for(int i=1; i<dec.size(); i++)
            if(dec[i] == decoratiuni::FARA_DECOR)
                throw eroare_decor();
    }

    this->pretBaza = 50;
    this->nrStraturi = nrStrat;
    this->straturi = arome;
    this->decor = dec;
    this->crema = cremaT;
}

Tort::Tort(const Tort &copie) : Prajitura(copie){
    this->nrStraturi = copie.nrStraturi;
    this->straturi = copie.straturi;
    this->decor = copie.decor;
    this->crema = copie.crema;
}

Tort &Tort::operator=(const Tort &copie) {
    if(this != &copie)
    {
        Prajitura::operator=(copie);
        this->nrStraturi = copie.nrStraturi;
        this->straturi = copie.straturi;
        this->decor = copie.decor;
        this->crema = copie.crema;
    }
    return *this;
}

Tort::~Tort() {
    std::cout<<"Destructor: class Tort\n";
}

float Tort::calculPret() const {
    float pretBucata = pretBaza*nrStraturi;     // Se incepe de la pretul de baza

    pretBucata = calculArome(pretBucata, nrStraturi, straturi);
    pretBucata = calculDecor(pretBucata, decor);
    pretBucata = calculCrema(pretBucata, crema);

    return pretBucata*numarBucati;
}