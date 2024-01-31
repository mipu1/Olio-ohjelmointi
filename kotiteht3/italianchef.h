#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;


class ItalianChef: public Chef
{
public:
    ItalianChef(string a, int jauhoAmount, int vesiAmount);
    ~ItalianChef();
    string getName();
    void makePasta();

private:
    int jauho;
    int vesi;

};

#endif // ITALIANCHEF_H
