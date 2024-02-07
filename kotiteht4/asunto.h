#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;
class Asunto
{
public:
    Asunto();
    int asukasMaara;
    int neliot;

    void maarita(int asukkaita, int nelioita);
    double laskeKulutus(double laskuKulut);
};

#endif // ASUNTO_H
