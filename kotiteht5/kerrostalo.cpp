#include "kerrostalo.h"


Kerrostalo::Kerrostalo() {
    cout << "Kerrostalon Luotu"<<  endl;
    cout << "Maaritellaan koko Kerrostalon kaikki asunnot" << endl;
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros;
    eka ->maaritaAsunnot();
    toka ->maaritaAsunnot();
    kolmas ->maaritaAsunnot();

}

double Kerrostalo::laskeKulutus(double laskuKulut)
{
    double hintaKulutus = eka->laskeKulutus(laskuKulut) + toka->laskeKulutus(laskuKulut) + kolmas->laskeKulutus(laskuKulut);
    cout << "Kerrostalon kulutus, kun hinta = 1 on "<< hintaKulutus << endl;
    return hintaKulutus;
}
