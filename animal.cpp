#include "animal.h"

using namespace std;


Animal::Animal(string n, string o) {
    name = n;
    owner = o;
    address = NULL;
}

void Animal::setAddress(string addr) {
    Address *a = new Address(addr);
    address = a;
}

void Animal::printAddress() {
    address->printInfo();
}

Animal::~Animal() {
    delete address;
    cout << "Bye Bye: " << name << endl;
}

void Animal::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}




