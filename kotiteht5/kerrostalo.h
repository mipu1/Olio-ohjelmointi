#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katutaso.h"
#include <iostream>
using namespace std;
class Kerrostalo
{
public:
    Kerrostalo();

    double laskeKulutus(double);

private:
    Katutaso *eka;
    Kerros *toka;
    Kerros *kolmas;

};

#endif // KERROSTALO_H
