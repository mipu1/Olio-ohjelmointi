#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "asunto.h"
#include "kerros.h"
using namespace std;
class Katutaso: public Kerros
{
public:
    Katutaso();


    void maaritaAsunnot()override;
    double laskeKulutus(double laskuKulut);

private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
