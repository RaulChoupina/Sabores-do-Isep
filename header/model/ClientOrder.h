#ifndef CLIENTORDER_H
#define CLIENTORDER_H

#include <iostream>
#include <string>
#include "Order.h" // Assuming Order class is defined elsewhere
#include "Client.h"

class ClientOrder : public Order {
private:
    int nOrder; // Not used in your provided snippets
    std::string orderDetails; // Changed to camelCase for consistency
    Client* client; // Pointer to Client object

public:
    ClientOrder(Client* client, float sellingPrice); // Constructor declaration
    void setClient(Client* pClient);
    Client* getClient();
};

#endif // CLIENTORDER_H
