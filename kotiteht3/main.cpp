#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{

    Chef kokki1("Gordon Ramsay");
    kokki1.makeSalad();
    kokki1.makeSoup();

    Chef kokki2("Anthony Bourdain");
    kokki2.makeSalad();
    kokki2.makeSoup();

    ItalianChef kokki3("Jyrki", 0,0);
    ItalianChef kokki4("Mario", 250, 100);
    kokki3.makeSalad();
    kokki4.makePasta();
    kokki3.makeSoup();

    return 0;
}
