#include "Kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo(){
    cout << "Kerostalo luotu" << endl;
}

double Kerrostalo::laskeKulutus(double a) {

double kulutusz =  eka.laskeKulutus(a)+toka.laskeKulutus(a)+kolmas.laskeKulutus(a);
return kulutusz;
}
