//
// Created by Andreea on 11/30/2021.
//

#include <iostream>
#include "angajat.h"

int Angajat::id_max = 1;

Angajat::Angajat() {
    this->nume = "Nume";
    this->prenume = "Prenume";
    this->salariuLunar = 1440;
    this->oreZi = 6;
    this->id = id_max;
    id_max++;
}


Angajat::Angajat(const std::string &nume_, const std::string &prenume_, const int salariu_, const int oreZi_)
{
    this->nume = nume_;
    this->prenume = prenume_;
    this->salariuLunar = salariu_;
    this->oreZi = oreZi_;
    this->id = id_max;
    id_max++;
}

Angajat::Angajat(const Angajat &copie) {
    this->nume = copie.nume;
    this->prenume = copie.prenume;
    this->salariuLunar = copie.salariuLunar;
    this->oreZi = copie.oreZi;
    this->id = copie.id;
}

Angajat &Angajat::operator=(const Angajat &copie) {
    if(this != &copie)
    {
        this->nume = copie.nume;
        this->prenume = copie.prenume;
        this->salariuLunar = copie.salariuLunar;
        this->oreZi = copie.oreZi;
    }
    return *this;
}

Angajat::~Angajat() {
    std::cout<<"Destructor: class Angajat\n";
}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os << "Id: " << angajat.id << "\nNume: " << angajat.nume << "\nPrenume: "
       << angajat.prenume << "\nSalariu lunar: " << angajat.salariuLunar << "\nOre lucrate pe zi: "
       << angajat.oreZi;
    return os;
}