#include <iostream>
#include "Shipment.h"
#include "Package.h"
#include "Envelope.h"
using namespace std;

int main() {
  string name = "Hector", addy = "San J.", city = "Monterrey", state = "NL", zip = "64630";
  
  Shipment shipment1(name, addy, city, state, zip, name, addy, city, state, zip, 30);
  Package package1(1, 2, 3, 4, 10);
  Envelope envelope1(26, 30, 15);

  cout << shipment1.calculateCost() << "\n";
  cout << package1.calculateCost() << "\n";
  cout << envelope1.calculateCost() << "\n";
}