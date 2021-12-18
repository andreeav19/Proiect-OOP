//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_EXCEPTII_H
#define PROIECT_OOP_EXCEPTII_H


#include <stdexcept>

class eroare_tort : public std::logic_error {
public:
    explicit eroare_tort(const std::string &message);
};

class eroare_decor : public eroare_tort {
public:
    explicit eroare_decor();
};


#endif //PROIECT_OOP_EXCEPTII_H
