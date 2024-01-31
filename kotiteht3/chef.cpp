#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string a) : name(a)
{

    cout << "Chef "<< name << " kostruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef "<< name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef "<< name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef "<< name << " makes soup" << endl;
}
