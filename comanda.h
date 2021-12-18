//
// Created by Andreea on 11/18/2021.
//

#ifndef PROIECT_OOP_COMANDA_H
#define PROIECT_OOP_COMANDA_H


#include <vector>
#include "prajitura.h"

class Comanda{
protected:
    int id;
    static int id_max;
    bool laPachet;
    std::vector<std::shared_ptr<Prajitura>> prajituri;

public:
    Comanda(const bool &laPachet, const std::vector<std::shared_ptr<Prajitura>> &prajiturele);

    friend std::ostream& operator<<(std::ostream& os, const Comanda &comanda);
    int pretTotal();
};

#endif //PROIECT_OOP_COMANDA_H
