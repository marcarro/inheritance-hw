#ifndef ENVELOPE_H
#define ENVELOPE_H

#include "Shipment.h"

class Envelope : Shipment {
  public:
    Envelope();
    Envelope(double lengthIn, double widthIn, double extraChargeIn);
    void setShippingCost(double shippingCostIn);
    double calculateCost();
  private:
    double length;
    double width;
    double extraCharge;
};

#endif