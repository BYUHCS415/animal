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



Address::Address(string address) {
    Address::address = address;
}

void Address::printInfo() {
    cout << "Address: " << address << endl;
}

Address::~Address() {
    cout << "Bye Address" << endl;
}

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
}

