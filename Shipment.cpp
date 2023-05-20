#include "Shipment.h"

Shipment::Shipment() {
  senderName = "Sender Name";
  senderAddress = "Sender Address";
  senderCity = "Sender City";
  senderState = "Sender State";
  senderZip = "Sender Zip";

  recipientName = "Recipient Name";
  recipientAddress = "Recipient Address";
  recipientCity = "Recipient City";
  recipientState = "Recipient State";
  recipientZip = "Recipient Zip";

  shippingCost = 0.0;
}

Shipment::Shipment(
      std::string nameS, 
      std::string addyS, 
      std::string cityS, 
      std::string stateS, 
      std::string zipS, 
      std::string nameR, 
      std::string addyR, 
      std::string cityR, 
      std::string stateR, 
      std::string zipR,
      int shippingCostIn
) {
  senderName = nameS;
  senderAddress = addyS;
  senderCity = cityS;
  senderState = stateS;
  senderZip = zipS;

  recipientName = nameR;
  recipientAddress = addyR;
  recipientCity = cityR;
  recipientState = stateR;
  recipientZip = zipR;

  shippingCost = shippingCostIn;
}
    
    
double Shipment::calculateCost() {
  return shippingCost;
}