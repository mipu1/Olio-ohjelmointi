#include "asunto.h"

Asunto::Asunto() {
    cout << "Asunto luotu" << endl;


}

void Asunto::maarita(int asukkaita, int nelioita)
{
    asukasMaara = asukkaita;
    neliot = nelioita;
    cout << "Asunto maaritetty, asukkaita= "<< asukkaita << ", nelioita= "<< nelioita << endl;
}

double Asunto::laskeKulutus(double laskuKulut)
{
    double hintaKulutus = laskuKulut * asukasMaara;
    cout << "Asunnon kulutus, kun hinta = 1 on "<< hintaKulutus << endl;

}
