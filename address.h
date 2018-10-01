#include <iostream>
#include <string> 

#ifndef ADDRESS_H

#define ADDRESS_H 

using namespace std;

class Address {
  public:
    Address(string address);
    void printInfo();
    ~Address();
  private:
    string address;
};

#endif