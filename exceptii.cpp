//
// Created by Andreea on 12/18/2021.
//

#include "exceptii.h"

eroare_tort::eroare_tort(const std::string &message) : logic_error("Eroare clasa Tort: " + message) {}

eroare_decor::eroare_decor() : eroare_tort("Eroare decor: Lista cu decoratiuni contine \"FARA_DECORATIUNI\", dar si alte precizari.") {}
