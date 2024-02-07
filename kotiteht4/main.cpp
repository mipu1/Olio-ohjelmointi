#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
using namespace std;

int main()
{

    Katutaso katuAsunto;
    katuAsunto.maaritaAsunnot();
    katuAsunto.laskeKulutus(100);


    Kerrostalo kokoTalo;
    kokoTalo.laskeKulutus(100);

    return 0;
}
