//
// Created by Andreea on 11/18/2021.
//

#ifndef PROIECT_OOP_ANGAJAT_H
#define PROIECT_OOP_ANGAJAT_H



#include <string>
#include <ostream>
#include <string>

class Angajat{
protected:
    std::string nume;
    std::string prenume;
    int salariuLunar;
    int oreZi;
    int id;
    static int id_max;

public:
    Angajat();
    Angajat(const std::string &nume_, const std::string &prenume_, int salariu_, int oreZi_);
    Angajat(const Angajat &copie);
    Angajat& operator=(const Angajat &copie);
    virtual ~Angajat();

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

};

#endif //PROIECT_OOP_ANGAJAT_H
