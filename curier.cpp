//
// Created by Andreea on 12/18/2021.
//

#include <iostream>
#include "curier.h"

Curier::Curier() : Angajat(){
    id_comanda = 1;
    nrInmatriculare = "numar inmatriculare";
}

Curier::Curier(const std::string &nume_, const std::string &prenume_, const int &salariu_, const int &oreZi_,
               const int &idComanda, const std::string &nrInm)
        : Angajat(nume_, prenume_, salariu_, oreZi_){
    this->id_comanda = idComanda;
    this->nrInmatriculare = nrInm;

}

Curier::Curier(const Curier &copie) : Angajat(copie){
    this->id_comanda = copie.id_comanda;
    this->nrInmatriculare = copie.nrInmatriculare;
}

Curier &Curier::operator=(const Curier &copie) {
    if(this != &copie)
    {
        this->nume = copie.nume;
        this->prenume = copie.prenume;
        this->salariuLunar = copie.salariuLunar;
        this->oreZi = copie.oreZi;
        this->id_comanda = copie.id_comanda;
        this->nrInmatriculare = copie.nrInmatriculare;
    }
    return *this;
}

Curier::~Curier() {
    std::cout<<"Destructor: class Curier";
}

std::ostream &operator<<(std::ostream &os, const Curier &curier) {
    os << "Id: " << curier.id << "\nNume: " << curier.nume << "\nPrenume: "
       << curier.prenume << "\nSalariu lunar: " << curier.salariuLunar << "\nOre lucrate pe zi: "
       << curier.oreZi << "\nId comanda: " << curier.id_comanda <<"\nNr de inmatriculare vehicul: " << curier.nrInmatriculare;

    return os;
}