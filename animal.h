#include <iostream>
#include <string>
#include "address.h"

using namespace std;

class Animal {
public:
  Animal(string n, string o);
  void printInfo();
  void printAddress();
  void setAddress(string address);
  ~Animal();
private:
  string name;
  string owner;
  Address *address;
};