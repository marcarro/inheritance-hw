#ifndef PACKAGE_H
#define PACKAGE_H

#include "Shipment.h"

class Package : Shipment {
  public:
    Package();
    Package(double lengthIn, double widthIn, double heightIn, double weightIn, double costPerKgIn);
    void setShippingCost(double shippingCostIn);
    double calculateCost();
  private:
    double length;
    double width;
    double height;
    double weight;
    double costPerKg;
};

#endif