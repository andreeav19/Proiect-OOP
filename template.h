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
    Informatii(const T& obiect, const std::string& text) {
        ob = obiect;
        info = text;
    };
    ~Informatii() {
        std::cout<<"Destructor: class template\n";
    };
    void afisare() {
        std::cout<<"Informatii despre datele introduse: "<<this->info<<"\n"<<ob;
    };

};

template <> class Informatii<Angajat> {
    Angajat ob;
    std::string info;       // Informatii personale legate de angajat, ex: email, telefon
    std::string feedback;   // Feedback angajat

public:
    Informatii(const Angajat& obiect, const std::string& text, const std::string& f) {
        ob = obiect;
        info = text;
        feedback = f;
    };
    ~Informatii() {
        std::cout<<"Destructor: template - angajat\n";
    }
    void afisare(){
        std::cout<<"Nume si prenume angajat: "<<ob.nume<<" "<<ob.prenume<<"\nDate angajat: "
                 <<info<<"\nFeedback angajat: "<<feedback;
    }
};

template <> class Informatii<Prajitura> {
    Prajitura ob;
    std::string info;       // Informatii legate de eveniment, de exemplu.
    bool vegan;

public:
    Informatii(const Prajitura& obiect, const std::string& text, const bool v) {
        ob = obiect;
        info = text;
        vegan = v;
    };
    ~Informatii() {
        std::cout<<"Destructor: template - prajitura\n";
    }
    void afisare(){
        std::cout<<"\nInformatii prajitura: "<<info<<"\n";
        vegan ? std::cout<<"Prajitura vegana\n" : std::cout<<"Prajitura nonvegana\n";
    }
};


#endif //PROIECT_OOP_TEMPLATE_H
