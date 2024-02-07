#include "Kerros.h"
#include <iostream>

using namespace std;

Kerros::Kerros() {cout << "Kerros luotu" << endl;}

void Kerros::maaritaAsunnot() {

  as1.maarita(2, 100);
  as2.maarita(2, 100);
  as3.maarita(2, 100);
  as4.maarita(2, 100);


}

double Kerros::laskeKulutus(double a) {

double kulutux = as1.laskeKulutus(a) + as2.laskeKulutus(a) + as3.laskeKulutus(a) + as4.laskeKulutus(a);
return kulutux;
}
