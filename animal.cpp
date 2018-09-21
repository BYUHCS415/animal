#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
  Animal(string n, string o);
  void printInfo();
private:
  string name;
  string owner;
  
};

Animal::Animal(string n, string o) {
    name = n;
    owner = o;
}

void Animal::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}


int main(int argc, char **argv) {
    
    //string fred;
    //cout << "Enter something for fred: ";
    //cin >> fred;
    
    Animal fred("Fred", "Bro. Slade");
    fred.printInfo();
    
    cout << "Hello Class: " << endl;
}
