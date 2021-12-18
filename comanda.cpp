//
// Created by Andreea on 11/18/2021.
//

#include "comanda.h"

int Comanda::id_max = 1;

Comanda::Comanda(const bool &laPachet, const std::vector<std::shared_ptr<Prajitura>> &prajiturele)
{
    id = id_max;
    id_max++;
    this->laPachet = laPachet;
    prajituri = prajiturele;
}

std::ostream& operator<<(std::ostream& os, const Comanda &comanda)
{
    if(comanda.laPachet)
        os<<"Id comanda: "<<comanda.id<<"\nComanda trebuie livrata";
    else
        os<<"Id comanda: "<<comanda.id<<"\nComanda nu trebuie livrata";

    return os;
}

int Comanda::pretTotal()
{
    int pretTotal = 0;
    int pretPrajitura;
    int nrPrajituri = prajituri.size();

    for(int i = 0; i < nrPrajituri; i++)
    {
        pretPrajitura = prajituri[i]->calculPret();
        pretTotal += pretPrajitura;
    }

    if(laPachet)    // Daca se livreaza comanda, se adauga o taxa suplimentara
        pretTotal += 5;

    return pretTotal;
}