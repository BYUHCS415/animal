#include <iostream>
#include <string>
#include "animal.h"
#include "address.h"



using namespace std;

Animal* createMary() {
    Animal *mary = new Animal("Mary", "Losse");
    mary->setAddress("Tonga");
    return mary;
}

int main(int argc, char **argv) {
    Animal fred("Fred", "Bro. Slade");
    fred.printInfo();
    Animal *mary2 = createMary();
    //(*mary2).printInfo();
    mary2->printInfo();
    mary2->printAddress();
    delete mary2;
    cout << "Hello Class: " << endl;
    Address *marryAddress = mary2->getAddress();
}