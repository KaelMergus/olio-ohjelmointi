#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, avg;
    cout << "Anna kolme lukua, niin lasketaan niiden keskiarvo" << endl;
    cin >> a >> b >> c;


    avg = (a + b + c)/3;

    cout << "Keskiarvo on: " << fixed << setprecision(2) << avg << endl;


    return 0;
}
