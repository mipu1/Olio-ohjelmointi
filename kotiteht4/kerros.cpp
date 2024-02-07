#include "kerros.h"
#include "katutaso.h"

Kerros::Kerros() {
    cout << "Kerros, Luodaan" << endl;

}

void Kerros::maaritaAsunnot()
{
    cout << "Kerros, maaritetaan katutasolta perittyja asuntoja" << endl;
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);

}

double Kerros::laskeKulutus(double laskuKulut)
{
    double hintaKulutus = laskuKulut * (as1.asukasMaara + as2.asukasMaara + as3.asukasMaara + as4.asukasMaara);
    return hintaKulutus;
}
