//
// Created by Andreea on 12/18/2021.
//

#ifndef PROIECT_OOP_BRIOSA_H
#define PROIECT_OOP_BRIOSA_H



#include <vector>
#include "prajitura.h"

enum class aromeBriosa { CIOCOLATA, PORTOCALE, CIOCOLATA_ROM, LAMAIE, VANILIE};
enum class sprinklesBriosa { FARA_SPRINKLES, SPRINKLES_CIOCOLATA, SPRINKLES_COLORATE, SPRINKLES_STELUTE};
enum class cremeBriosa {FARA_CREMA, VANILIE, CIOCOLATA, LAMAIE, CAPSUNE, ZMEURA};

class Briosa : public Prajitura {
    aromeBriosa aroma;
    sprinklesBriosa sprinkles;
    cremeBriosa crema;
public:
    Briosa();
    Briosa(const std::string& nume, const int& timp, const int& numarB,
           const aromeBriosa& aroma, const sprinklesBriosa& sprinklesBriosa, const cremeBriosa& cremaBriosa);
    Briosa(const Briosa &copie);
    Briosa& operator=(const Briosa &copie);
    ~Briosa();

    float calculPret() const;
};


#endif //PROIECT_OOP_BRIOSA_H
