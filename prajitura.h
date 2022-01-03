//
// Created by Andreea on 11/18/2021.
//

#ifndef PROIECT_OOP_PRAJITURA_H
#define PROIECT_OOP_PRAJITURA_H



#include <iostream>

class Prajitura{
protected:
    std::string nume;
    int timpPreparare;  //exprimat in numarul de minute
    float pretBaza;       //pretul minim al unei prajituri, in functie de tipul ei
    int numarBucati;
    int id;
    static int id_max;

public:
    Prajitura();
    Prajitura(const std::string& nume, int timp, int numarB);
    Prajitura(const Prajitura &copie);
    Prajitura& operator=(const Prajitura &copie);
    virtual ~Prajitura();

    virtual float calculPret() const;
    friend std::ostream& operator<<(std::ostream& os, const Prajitura& prajitura);
    friend class builder_prajitura;
    template <class T> friend class Informatii;
};



#endif //PROIECT_OOP_PRAJITURA_H
