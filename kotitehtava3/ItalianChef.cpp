#include "ItalianChef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string n, int a, int b) : Chef(n), vesi(a), jauhot(b) {

    cout << "Chef " <<name<<" konstruktori"<<endl;
    }

ItalianChef:: ~ItalianChef() {
   cout<<"Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    cout<<"Chef "<<name<<" makes Pasta with special recipe"<<endl;
    cout << "Chef "<<name<< " uses vesi = "<<vesi<<endl;
    cout << "Chef "<<name<< " uses jauhot = "<<jauhot<<endl;
}
