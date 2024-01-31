#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;


ItalianChef::ItalianChef(string a, int jauhoAmount, int vesiAmount) : Chef(a){
    //cout << "Chef "<< a << " kostruktori" << endl;
    jauho = jauhoAmount;
    vesi = vesiAmount;
}

ItalianChef::~ItalianChef()
{

    //cout << "Chef "<< name << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;

}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " users jauhot = "<< jauho << endl;
    cout << "Chef " << name << " users vesi = "<< vesi << endl;

}


