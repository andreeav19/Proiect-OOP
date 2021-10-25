#include <iostream>
#include <vector>
#include <string>

class Prajitura{
private:
    std::string nume;
    int timpPreparare;  //exprimat in numarul de minute
    int pretBucata;
    int numarBucati;

public:

    // Constructori de initializare
    Prajitura();
    Prajitura(const std::string& nume, const int& timp, const int& pretB, const int& numarB);

    // Constructor de copiere
    Prajitura(const Prajitura &copie);

    //Operator=
    Prajitura& operator=(const Prajitura &copie);

    // Destructor
    ~Prajitura()
    {
        std::cout<<"Destructor: class Prajitura"<<std::endl;
    }

    // Functie
    int calculPret();

    // Operator <<
    friend std::ostream& operator<<(std::ostream& os, Prajitura& prajitura);
};

Prajitura::Prajitura()
{
    nume = "tort";
    timpPreparare = 100;
    pretBucata = 80;
    numarBucati = 1;
}

Prajitura::Prajitura(const std::string& nume, const int& timp, const int& pretB, const int& numarB)
{
    this->nume = nume;
    timpPreparare = timp;
    pretBucata = pretB;
    numarBucati = numarB;
}

Prajitura::Prajitura(const Prajitura &copie)
{
    std::cout<<"Constructor de copiere - Prajitura\n";
}

Prajitura& Prajitura::operator=(const Prajitura &copie)
{
    if(this != &copie)
    {
    this->nume = copie.nume;
    this->numarBucati = copie.numarBucati;
    this->timpPreparare = copie.timpPreparare;
    this->pretBucata = copie.pretBucata;
    }
    return *this;
}

int Prajitura::calculPret()
{
    return pretBucata*numarBucati;
}

std::ostream& operator<<(std::ostream& os, Prajitura& prajitura)
{
    os<<"Prajitura: "<<prajitura.nume<<"\nPret Bucata: "<<prajitura.pretBucata<<"\nNumar Bucati: "<<prajitura.numarBucati<<"\nTimp Preparare: "<<prajitura.timpPreparare<<" min.\n";
    return os;
}

class Comanda{
private:
    int numar;  // Numarul asociat comenzii
    bool laPachet;
    std::vector<Prajitura> prajituri;

public:
    // Constructori de initializare
    Comanda(const int &nr, const bool &laPachet, const std::vector<Prajitura> &prajituri);

    // Operator<<
    friend std::ostream& operator<<(std::ostream& os, Comanda &comanda);

    // Functii
    int pretTotal();
};

Comanda::Comanda(const int &nr, const bool &laPachet, const std::vector<Prajitura> &prajiturele)
{
    numar = nr;
    this->laPachet = laPachet;
    prajituri = prajiturele;
}

std::ostream& operator<<(std::ostream& os, Comanda &comanda)
{
    if(comanda.laPachet)
        os<<"Numarul comenzii: "<<comanda.numar<<"\nComanda trebuie livrata";
    else
        os<<"Numarul comenzii: "<<comanda.numar<<"\nComanda nu trebuie livrata";

    return os;
}

int Comanda::pretTotal()
{
    int pretTotal = 0;
    int pretPrajitura;
    for(auto p = prajituri.begin(); p != prajituri.end(); p++)  // Am incercat si p+=sizeof(Prajitura) si iesea din vector
    {
        pretPrajitura = (*p).calculPret();
        std::cout<<"########Prajitura: "<<*p<<"\n########\n";
        std::cout<<"########Pret prajitura: "<<pretPrajitura<<"\n########\n";
        pretTotal += pretPrajitura;
    }

    if(laPachet)    // Daca se livreaza comanda, se adauga o taxa suplimentara
        pretTotal += 5;

    return pretTotal;
}

class data{
private:
    int zi;
    std::string luna;

public:
    data();
    data(const int &zi, const std::string &luna);
    friend std::ostream& operator<<(std::ostream& os, data &data_);
};

data::data()
{
    zi = 1;
    luna = "Ianuarie";
}
data::data(const int &zi_, const std::string &luna_)
{
    zi = zi_;
    luna = luna_;
}

std::ostream& operator<<(std::ostream& os, data &data_)
{
    os<<data_.zi<<" "<<data_.luna;
    return os;
}

int main() {

//  Verificare class Prajitura

    Prajitura briosa("briosa", 60, 7, 12);
    int pretBriosh = briosa.calculPret();
    std::cout<<"Pret Briosa: "<<pretBriosh<<" lei\n";
    Prajitura briosa2 = briosa; //constructor de copiere
    Prajitura briosa3;
    briosa3 = briosa;   //operatorul =

    Prajitura tort;
    std::cout << briosa;
    std::cout << tort;
    std::cout << "\n\n\n";

//  Verificare class Comanda

    std::vector<Prajitura> prajiturele;
    prajiturele.push_back(briosa);
    prajiturele.push_back(tort);

    Comanda comanda1(1, true, prajiturele);
    Comanda comanda2(2, false, prajiturele);

    int pretComanda1 = comanda1.pretTotal();
    int pretComanda2 = comanda2.pretTotal();

    //Nu functioneaza :(
    //std::cout<<"Pret comanda 1: "<<pretComanda1<<"\nPret Comanda 2: "<<pretComanda2<<"\n";
    std::cout<<"\nComanda 1: "<<comanda1<<"\nComanda 2: "<<comanda2<<"\n";

//  Verificare class data

    std::cout<<"\n\n\n\n";
    data data1;
    std::cout<<data1<<"\n";
    data data2(27, "Noiembrie");
    std::cout<<data2<<"\n";

    return 0;

}
