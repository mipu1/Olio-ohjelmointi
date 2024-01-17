#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);


int game(int maxnum)
{
    srand(time(NULL));

    int arvottuLuku = rand() % maxnum + 1;
    cout<< "Arvaa oikea numero 1-" << maxnum <<": " << endl;
    int arvausKerrat;

    for(; ; arvausKerrat++){

        int arvaus;
        //cout<< arvottuLuku << endl;     //Arvauspelin Voitto luku

        cout << "\tArvauskerta " << arvausKerrat + 1 << ": ";
        cin >> arvaus;


        if(arvaus == arvottuLuku ){
            cout << "Oikein arvattu!\n" << endl;
            break;
        }
        else if (arvaus < arvottuLuku){
            cout << "Annoit luvun " << arvaus << ", voitto luku on suurempi. Arvaa uudelleen \n" << endl;
        }
        else if (arvaus > arvottuLuku){
            cout << "Annoit luvun " << arvaus << ", voitto luku on pienempi. Arvaa uudelleen \n" << endl;
        }
    }
    return arvausKerrat;
}



int main()
{
    int maxnum = 40;
    int game(int maxnum);
    int arvausKerrat = game(maxnum) + 1;

    cout << "Main-ohjelmasa, game funktiosta tulostus Arvauskerrat:" << arvausKerrat << "\n" << endl;


    srand(time(NULL));

    int arvottuLuku = rand() % 20 + 1;
    cout<< "Arvaa oikea numero 1-20: " << endl;

    while(1){

        int arvaus;
        //cout<< arvottuLuku << endl;     //Arvauspelin Voitto luku
        cin >> arvaus;

        if(arvaus == arvottuLuku ){
            cout << "Oikein arvattu!\n" << endl;
            break;
        }
        else if (arvaus < arvottuLuku){
            cout << "Annoit luvun " << arvaus << ", voitto luku on suurempi. Arvaa uudelleen \n" << endl;
        }
        else if (arvaus > arvottuLuku){
            cout << "Annoit luvun " << arvaus << ", voitto luku on pienempi. Arvaa uudelleen \n" << endl;
        }
    }



    return 0;
}

