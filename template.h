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

template<class T>
Informatii<T>::Informatii(const T &obiect, const std::string &text) {
    ob = obiect;
    info = text;
}

template<class T>
Informatii<T>::~Informatii() {
    std::cout<<"Destructor: class template";
}

template<class T>
void Informatii<T>::afisare() {
    std::cout<<"Informatii despre datele introduse: "<<this->info<<"\n";
}


#endif //PROIECT_OOP_TEMPLATE_H
