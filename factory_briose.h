//
// Created by Andreea on 1/3/2022.
//

#ifndef PROIECT_OOP_FACTORY_BRIOSE_H
#define PROIECT_OOP_FACTORY_BRIOSE_H


#include "briosa.h"

class factory_briose {
public:
    static Briosa ciocolata(){
        return Briosa("Briose cu ciocolata", 120, 12, aromeBriosa::CIOCOLATA,
                      sprinklesBriosa::SPRINKLES_CIOCOLATA, cremeBriosa::CIOCOLATA);
    };
    static Briosa ciocolata_si_rom(){
        return Briosa("Briose cu ciocolata si rom", 120, 12, aromeBriosa::CIOCOLATA_ROM,
                      sprinklesBriosa::FARA_SPRINKLES, cremeBriosa::CIOCOLATA);
    };
    static Briosa vanilie(){
        return Briosa("Briose cu vanilie", 140, 12, aromeBriosa::VANILIE,
                      sprinklesBriosa::SPRINKLES_COLORATE, cremeBriosa::VANILIE);
    };
    static Briosa lamaie(){
        return Briosa("Briose cu lamaie", 150, 12, aromeBriosa::LAMAIE,
                      sprinklesBriosa::SPRINKLES_STELUTE, cremeBriosa::VANILIE);
    };

    ~factory_briose() {
        std::cout<<"Destructor: class factory_briose\n";
    }

};


#endif //PROIECT_OOP_FACTORY_BRIOSE_H
