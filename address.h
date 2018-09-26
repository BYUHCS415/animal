#include <iostream>
#include <string> 

using namespace std;

class Address {
  public:
    Address(string address);
    void printInfo();
    ~Address();
  private:
    string address;
};
