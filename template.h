//
// Created by Andreea on 1/2/2022.
//

#ifndef PROIECT_OOP_TEMPLATE_H
#define PROIECT_OOP_TEMPLATE_H


#include <string>

template <class T> class Informatii{
    T ob;
    std::string info;

public:
    Informatii(const T& obiect, const std::string& text);
    ~Informatii();
    void afisare();

};


#endif //PROIECT_OOP_TEMPLATE_H
