#include "Chef.h"

#include <iostream>
using namespace std;

Chef::Chef(string n) : name(n) {
    cout << "Chef "<<name<<" konstruktori"<<endl;
}

Chef::~Chef(){

    cout<<"Chef "<<name<<" destruktori"<<endl;
}

void Chef::makeSalad(){
    cout<<"Chef "<<name<<" makes Salad"<<endl;
}

void Chef::makeSoup() {
    cout<<"Chef "<<name<<" makes Soup"<<endl;
}
