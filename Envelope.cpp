#include "Envelope.h"

Envelope::Envelope() {
  length = 0.0;
  width = 0.0;
  extraCharge = 0.0;
}
Envelope::Envelope(double lengthIn, double widthIn, double extraChargeIn) {
  length = lengthIn;
  width = widthIn;
  extraCharge = extraChargeIn;
}

void Envelope::setShippingCost(double shippingCostIn) {
  shippingCost = shippingCostIn;
}

double Envelope::calculateCost() {
  double cost = (length * width > 25) ? shippingCost + extraCharge : shippingCost;
  return cost;
}