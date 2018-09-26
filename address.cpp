#include "address.h"

using namespace std;

Address::Address(string address) {
    Address::address = address;
}

void Address::printInfo() {
    cout << "Address: " << address << endl;
}

Address::~Address() {
    cout << "Bye Address" << endl;
}