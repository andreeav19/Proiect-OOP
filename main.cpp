#include <iostream>
#include <vector>
#include "prajitura.h"
#include "comanda.h"
#include "angajat.h"
#include "tort.h"
#include "briosa.h"
#include "curier.h"
#include "cofetar.h"
#include "exceptii.h"
#include <memory>
#include "template.h"

int main() {
/*
//  Verificare class Prajitura

    Prajitura praji("praji", 60, 12);
    int pretBriosh = praji.calculPret();
    std::cout<<"Pret Briosa: "<<pretBriosh<<" lei\n";
    Prajitura briosa2 = praji; //constructor de copiere
    Prajitura briosa3;
    briosa3 = praji;   //operatorul =

    Prajitura praji4;
    std::cout << praji;
    std::cout << praji4;
    std::cout << "\n\n\n";

//  Verificare class Comanda

    std::vector<Prajitura> prajiturele;
    prajiturele.push_back(praji);
    prajiturele.push_back(praji4);

    Comanda comanda1(true, prajiturele);
    Comanda comanda2(false, prajiturele);

    int pretComanda1 = comanda1.pretTotal();
    int pretComanda2 = comanda2.pretTotal();

    std::cout<<"Pret comanda 1: "<<pretComanda1<<"\nPret Comanda 2: "<<pretComanda2<<"\n";
    std::cout<<"\nComanda 1: "<<comanda1<<"\nComanda 2: "<<comanda2<<"\n";

//  Verificare clasa Angajat
    Angajat angajat("Alune","Gilbert", 2500, 6);
    Angajat angajat2;
    Angajat angajat3 = angajat2;

    std::cout<<"\n\n\n";
    std::cout<<angajat<<"\n";
    std::cout<<angajat2<<"\n";
    std::cout<<angajat3<<"\n";

    angajat2 = angajat;

    std::cout<<angajat2<<"\n";

*/

/*
//  Verificare clasa Tort:
    Tort tort1;
    std::cout<<tort1;

    std::vector<aromeBlat> aromeTort2 = {aromeBlat::CIOCOLATA, aromeBlat::CAFEA_CIOCOLATA};
    std::vector<decoratiuni> decorTort2 = {decoratiuni::FRISCA, decoratiuni::SPRINKLES};
    cremeTort cremaTort2 = cremeTort::CAPSUNE;
    Tort tort2("tort2", 120, 2, 2, aromeTort2, decorTort2, cremaTort2);
    std::cout<<tort2;

    float pretTort1 = tort1.calculPret();
    float pretTort2 = tort2.calculPret();
    std::cout<<"\n\nPretul tort1: "<<pretTort1<<" lei\nPretul tort2: "<<pretTort2<<" lei\n\n";

    Tort tort3 = tort1;
    std::cout<<tort3;

    Tort tort4;
    tort4 = tort2;
    std::cout<<tort4;

// Verificare clasa briosa:
    Briosa briosa1;
    std::cout<<briosa1<<"\n";

    aromeBriosa aromaB = {aromeBriosa::LAMAIE};
    sprinklesBriosa sprinklesB = {sprinklesBriosa::SPRINKLES_STELUTE};
    cremeBriosa cremaB = {cremeBriosa::ZMEURA};

    Briosa briosa2("briosa2", 90, 12, aromaB, sprinklesB, cremaB);

    std::cout << briosa2 << "\n";

    float pretBriosa1 = briosa1.calculPret();
    float pretBriosa2 = briosa2.calculPret();

    std::cout<<"\nPret briosa1: "<<pretBriosa1<<" lei\nPret briosa2: "<<pretBriosa2<<" lei\n\n";

    Briosa briosa3 = briosa2;
    std::cout << briosa3 << "\n";

    Briosa briosa4;
    briosa4 = briosa1;
    std::cout<<briosa4<<"\n\n";

//  Verificare clasa curier:

    Curier curier1;
    std::cout<<curier1<<"\n";

    Curier curier2("Masinel", "Gigel", 1450, 6, 3, "B52BMW");
    std::cout<<curier2<<"\n";

    Curier curier3 = curier2;
    std::cout<<curier3<<"\n";

    Curier curier4;
    curier4 = curier1;
    std::cout<<curier4<<"\n";

//  Verificare class cofetar:

    Cofetar cofetar;
    Cofetar cofetar2("Alune", "Gilbert", 2500, 8, 45);
    Cofetar cofetar3 = cofetar2;
    Cofetar cofetar4;
    cofetar4 = cofetar3;

    std::cout<<cofetar<<"\n"<<cofetar2<<"\n"<<cofetar3<<"\n"<<cofetar4<<"\n";

// Verificare class comanda:

    std::shared_ptr<Prajitura> ptrPrajitura {new Prajitura()};
    std::shared_ptr<Tort> ptrTort {new Tort()};
    std::shared_ptr<Briosa> ptrBriosa {new Briosa()};

    std::vector<std::shared_ptr<Prajitura>> prajiturele;
    prajiturele.push_back(ptrPrajitura);
    prajiturele.push_back(ptrTort);
    prajiturele.push_back(ptrBriosa);

    std::cout<<"\n=========\nCount Pointer Prajitura "<<ptrPrajitura.use_count()<<"\n=========\n";

    Comanda comanda1 (true, prajiturele);
    std::cout<<comanda1<<"\n";

    std::cout<<"\n=========\nCount Pointer Prajitura "<<ptrPrajitura.use_count()<<"\n=========\n";

//  Verificare exceptii:

    std::vector<aromeBlat> arome_tort_exceptie;
    arome_tort_exceptie.push_back(aromeBlat::VANILIE);
    std::vector<decoratiuni> decor_tort_exceptie;
    decor_tort_exceptie.push_back(decoratiuni::FARA_DECOR);
    cremeTort crema_tort_exceptie = cremeTort::CAPSUNE;

    std::vector<aromeBlat> arome_tort_exceptie2;
    arome_tort_exceptie2.push_back(aromeBlat::CAFEA_CIOCOLATA);
    std::vector<decoratiuni> decor_tort_exceptie2;
    decor_tort_exceptie2.push_back(decoratiuni::FARA_DECOR);
    decor_tort_exceptie2.push_back(decoratiuni::SPRINKLES);
    cremeTort crema_tort_exceptie2 = cremeTort::CAPSUNE;

    std::vector<aromeBlat> arome_tort_exceptie3;
    arome_tort_exceptie3.push_back(aromeBlat::VANILIE);
    std::vector<decoratiuni> decor_tort_exceptie3;
    decor_tort_exceptie3.push_back(decoratiuni::SPRINKLES);
    decor_tort_exceptie3.push_back(decoratiuni::FRISCA);
    decor_tort_exceptie3.push_back(decoratiuni::FARA_DECOR);
    cremeTort crema_tort_exceptie3 = cremeTort::VANILIE_CREMA;

    try{
        //Tort tort_exceptie("tort exceptie", 170, 1, 3, arome_tort_exceptie, decor_tort_exceptie, crema_tort_exceptie);
        //Tort tort_exceptie2("tort excpetie 2", 170, 1, 1, arome_tort_exceptie2, decor_tort_exceptie2, crema_tort_exceptie2);
        Tort tort_exceptie3("tort exceptie 3", 170, 1, 1, arome_tort_exceptie3, decor_tort_exceptie3, crema_tort_exceptie3);
    } catch (const std::runtime_error& eroare){
        std::cout<<eroare.what()<<"\n";
    } catch (const eroare_decor& eroare) {
        std::cout<<eroare.what()<<"\n";
    } catch (const std::exception& eroare) {
        std::cout<<eroare.what()<<"\n";
    }
*/

//  Verificare clasa template
 /*   Prajitura p;
    Informatii<Prajitura> infoP(p, "Zi de nastere");
    infoP.afisare();
*/
    std::string s = "incercare";
    Informatii<std::string> infoS(s, "ca sa vedem daca merge");
 //   infoS.afisare();

}