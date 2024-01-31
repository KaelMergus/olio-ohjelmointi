#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
   string name = "Gordon Ramsay";
   string name2 = "Anthony Bourdain";
    Chef chef1(name);
    chef1.makeSalad();
    chef1.makeSoup();

    Chef chef2(name2);
    chef2.makeSalad();
    chef2.makeSoup();

    Chef chef("Jyrki");
    ItalianChef italianchef("Mario", 100, 250);
    chef.makeSalad();
    chef.makeSoup();
    italianchef.makePasta();

    return 0;
}
