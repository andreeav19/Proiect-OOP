//
// Created by Andreea on 11/18/2021.
//

#include "prajitura.h"

int Prajitura::id_max = 1;

Prajitura::Prajitura(){
    nume = "prajitura";
    timpPreparare = 100;
    pretBaza = 20;
    numarBucati = 1;
    id = id_max;
    id_max++;
}

Prajitura::Prajitura(const std::string& nume, const int& timp, const int& numarB)
{
    this->nume = nume;
    this->timpPreparare = timp;
    this->pretBaza = 20;
    this->numarBucati = numarB;
    id = id_max;
    id_max++;
}

Prajitura::Prajitura(const Prajitura &copie)
{
    this->nume = copie.nume;
    this->numarBucati = copie.numarBucati;
    this->timpPreparare = copie.timpPreparare;
    this->pretBaza = copie.pretBaza;
    this->id = copie.id;
}

Prajitura& Prajitura::operator=(const Prajitura &copie)
{
    if(this != &copie)
    {
        this->nume = copie.nume;
        this->numarBucati = copie.numarBucati;
        this->timpPreparare = copie.timpPreparare;
        this->pretBaza = copie.pretBaza;
    }
    return *this;
}

Prajitura::~Prajitura()
{
    std::cout<<"Destructor: class Prajitura"<<std::endl;
}

float Prajitura::calculPret() const
{
    return pretBaza * numarBucati;
}

std::ostream& operator<<(std::ostream& os, const Prajitura& prajitura)
{
    os << "Id: " << prajitura.id << "\nPrajitura: " << prajitura.nume << "\nPret Prajitura: " << prajitura.pretBaza << "\nNumar Bucati: "
       <<prajitura.numarBucati<<"\nTimp Preparare: "<<prajitura.timpPreparare<<" min.\n";
    return os;
}