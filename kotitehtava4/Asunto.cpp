#include "Asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto() {
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int a, int b) {

    asukasMaara = a;
    neliot = b;

    cout << "Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}

double Asunto::laskeKulutus(double a) {

    double kulutus = a * asukasMaara * neliot;

    cout << "asunnon kulutus, kun hinta = "<<a<<" on "<< kulutus << endl;

    return kulutus;

}
