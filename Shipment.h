#ifndef SHIPMENT_H
#define SHIPMENT_H

#include <string>

class Shipment {
  public:
    Shipment();
    Shipment(
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
      int shippingCost
    );
    double calculateCost();

  private:
    // Sender data
    std::string senderName;
    std::string senderAddress;
    std::string senderCity;
    std::string senderState;
    std::string senderZip;
  
    // Recipient data
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    std::string recipientZip;

  protected:
    double shippingCost;
};

#endif