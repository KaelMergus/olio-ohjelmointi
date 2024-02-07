#include "Katutaso.h"
#include <iostream>

using namespace std;

void Katutaso::maaritaAsunnot() override {

    as1.maarita(2, 100);
    as2.maarita(2, 100);

}

Katutaso::Katutaso() {

   cout << "Katutaso luotu" << endl;
}

