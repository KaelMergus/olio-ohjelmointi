#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "Chef.h"
#include <string>

class ItalianChef : public Chef {


private:

int vesi;
int jauhot;

public:

ItalianChef(std::string, int, int);

~ItalianChef();

std::string getName();

void makePasta();


};


#endif // ITALIANCHEF_H
