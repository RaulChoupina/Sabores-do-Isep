//
// Created by HP on 27/05/2024.
//

#ifndef CLIENTORDERCONTAINER_H
#define CLIENTORDERCONTAINER_H
#include <iostream>
#include "ClientOrder.h"
#include "ClientContainer.h"
#include "Menu.h"
#include <container>

using namespace std;

class Client;
class ClientOrder;
class  ClientOrderContainer{
private:
    container < ClientOrder > clientOrders;
    ClientContainer*  clients;
    Menu* menus;
public:
    ClientOrderContainer();
    int getSize(clientOrderContainer& clientOrderContainer);
    container <ClientOrder> getAll();
    ClientOrderContainer getClientOrders();
    ClientOrderContainer getClientOrdersByClient(Client* pClient, ClientOrderContainer& containerClientOrderContainer);
    bool DidClientMadeOrder(Client* pClient, ClientOrderContainer& containerClientOrderContainer);
    void setClients(ClientContainer* clients);
    void setMenu(Menu* menus);

}

#endif //CLIENTORDERCONTAINER_H
