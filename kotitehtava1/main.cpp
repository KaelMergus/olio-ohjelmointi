#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   const int min{1};
   const int max{20};

   cout << "Arvaa luku valilta " << min <<"-" << max << endl;

   int rnd_number{};
   int arvaus{};
   srand(time(NULL));

   rnd_number = rand() % max + min;

   do {

       cin >> arvaus;

      if (arvaus < rnd_number)
          cout << "Liian pieni luku" << endl;
      if (arvaus > rnd_number)
          cout << "Liian suuri luku" << endl;

   }while (arvaus != rnd_number);

   cout << "Hienoa, oikein meni!" << endl;




    return 0;
}
