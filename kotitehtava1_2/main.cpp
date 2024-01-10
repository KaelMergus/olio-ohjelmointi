#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);


int main()
{
   int max{20};

 int result = game(max);

 cout << "Arvasit oikein "<<result<<". yrityksella" << endl;




    return 0;
}



int game(int maxnum) {

int min{1};

cout << "Arvaa luku valilta " << min <<"-" << maxnum << endl;

int rnd_number{};
int arvaus{};
srand(time(NULL));
int i = 0;

rnd_number = rand() % maxnum + min;

do {
    i = i + 1;
    cin >> arvaus;

   if (arvaus < rnd_number)
       cout << "Liian pieni luku" << endl;
   if (arvaus > rnd_number)
       cout << "Liian suuri luku" << endl;

}while (arvaus != rnd_number);

cout << "Hienoa, oikein meni!" << endl;

return i;

}
