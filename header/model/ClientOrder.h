//
// Created by HP on 27/05/2024.
//

#ifndef CLIENTORDER_H
#define CLIENTORDER_H

#include <iostream>
#include "Order.h"
#include "Client.h"
#include <string>

class ClientOrder : public order {
private:
int nOrder;
string OrderDetails;
Client* client{};
public:
    ClientOrder()= default;
    ClientOrder(int nOrder, string OrderDetails , Client* client);
    void setClient(Client* pClient);
    Client* getClient();
};
#endif //CLIENTORDER_H
