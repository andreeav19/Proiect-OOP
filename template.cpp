//
// Created by Andreea on 1/2/2022.
//

#include <iostream>
#include "template.h"

template<class T>
Informatii<T>::Informatii(const T& obiect, const std::string& text) {
    ob = obiect;
    info = text;
}

template<class T>
Informatii<T>::~Informatii() {
    std::cout<<"Destructor: class template\n";
}

template<class T>
void Informatii<T>::afisare() {
    std::cout<<"Informatii legate de datele introduse: "<<this->info<<std::endl;
}




