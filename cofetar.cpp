//
// Created by Andreea on 12/18/2021.
//

#include <iostream>
#include "cofetar.h"

Cofetar::Cofetar() : Angajat() {
    this->salariuLunar = 2500;
    this->oreZi = 8;
    this->nrPrajituri = 30;
}

Cofetar::Cofetar(const std::string &nume_, const std::string &prenume_, const int salariu_, const int oreZi_, const int nrPraji)
                 : Angajat(nume_, prenume_, salariu_, oreZi_){
    this->nrPrajituri = nrPraji;
}

Cofetar::Cofetar(const Cofetar &copie) : Angajat(copie){
    this->nrPrajituri = copie.nrPrajituri;
}

Cofetar &Cofetar::operator=(const Cofetar &copie) {
    if(this != &copie)
    {
        Angajat::operator=(copie);
        this->nrPrajituri = copie.nrPrajituri;
    }
    return *this;
}

Cofetar::~Cofetar() {
    std::cout<<"Destructor: class Cofetar\n";
}

std::ostream &operator<<(std::ostream &os, const Cofetar &cofetar) {
    os << "Id: " << cofetar.id << "\nNume: " << cofetar.nume << "\nPrenume: "
       << cofetar.prenume << "\nSalariu lunar: " << cofetar.salariuLunar << "\nOre lucrate pe zi: "
       << cofetar.oreZi << "\nNr prajituri facute: " << cofetar.nrPrajituri;

    return os;
}