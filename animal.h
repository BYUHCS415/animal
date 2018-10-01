#include <iostream>
#include <string>
#include "address.h"

#ifndef ANIMAL_H

#define ANIMAL_H

using namespace std;

class Animal {
public:
  Animal(string n, string o);
  void printInfo();
  void printAddress();
  Address* getAddress();
  void setAddress(string address);
  ~Animal();
private:
  string name;
  string owner;
  Address *address;
};

#endif