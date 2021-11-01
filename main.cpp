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
    friend std::ostream& operator<<(std::ostream& os, const Prajitura& prajitura);
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
    this->nume = copie.nume;
    this->numarBucati = copie.numarBucati;
    this->timpPreparare = copie.timpPreparare;
    this->pretBucata = copie.pretBucata;
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

std::ostream& operator<<(std::ostream& os, const Prajitura& prajitura)
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
    friend std::ostream& operator<<(std::ostream& os, const Comanda &comanda);

    // Functii
    int pretTotal();
};

Comanda::Comanda(const int &nr, const bool &laPachet, const std::vector<Prajitura> &prajiturele)
{
    numar = nr;
    this->laPachet = laPachet;
    prajituri = prajiturele;
}

std::ostream& operator<<(std::ostream& os, const Comanda &comanda)
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
    for(auto p = prajituri.begin(); p != prajituri.end(); p++)
    {
        pretPrajitura = (*p).calculPret();
        pretTotal += pretPrajitura;
    }

    if(laPachet)    // Daca se livreaza comanda, se adauga o taxa suplimentara
        pretTotal += 5;

    return pretTotal;
}

class Angajat{
    std::string nume;
    std::string prenume;
    int salariu;
    int oreZi;

public:
    Angajat(const std::string &nume_, const std::string &prenume_, const int &salariu_, const int &oreZi_);

    friend std::ostream &operator<<(std::ostream &os, const Angajat &angajat);

};

Angajat::Angajat(const std::string &nume_, const std::string &prenume_, const int &salariu_, const int &oreZi_)
{
    this->nume = nume_;
    this->prenume = prenume_;
    this->salariu = salariu_;
    this->oreZi = oreZi_;
}

std::ostream &operator<<(std::ostream &os, const Angajat &angajat) {
    os <<"Nume angajat: "<<angajat.nume<<"\nPrenume angajat: "<<angajat.prenume<<"\nSalariu: "<<angajat.salariu
       <<"\nNr de ore lucrate pe zi: "<<angajat.oreZi;
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

    std::cout<<"Pret comanda 1: "<<pretComanda1<<"\nPret Comanda 2: "<<pretComanda2<<"\n";
    std::cout<<"\nComanda 1: "<<comanda1<<"\nComanda 2: "<<comanda2<<"\n";

//  Verificare clasa Angajat
    Angajat angajat("Alune","Gilbert", 2500, 6);
    std::cout<<"\n\n\n";
    std::cout<<angajat<<"\n";
    return 0;

}
