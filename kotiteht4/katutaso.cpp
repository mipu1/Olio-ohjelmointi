#include "katutaso.h"
#include "kerros.h"

Katutaso::Katutaso() {
    cout << "Katutaso Luotu" << endl;

}

void Katutaso::maaritaAsunnot()
{


    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double laskuKulut)
{
    double hintaKulutus = laskuKulut * (as1.asukasMaara + as2.asukasMaara) + (Kerros::laskeKulutus(laskuKulut));
    //cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<< hintaKulutus << endl;
    return hintaKulutus;
}
