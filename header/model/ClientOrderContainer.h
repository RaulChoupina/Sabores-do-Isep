//
// Created by HP on 27/05/2024.
//

#ifndef CLIENTORDERCONTAINER_H
#define CLIENTORDERCONTAINER_H
#include <iostream>
#include "ClientOrder.h"
#include "ClientContainer.h"
#include "Menu.h"
#include <list>

using namespace std;

class Client;
class ClientOrder;
class  ClientOrderContainer{
private:
    list < ClientOrder > clientOrders;
    ClientContainer*  clients;
    Menu* menus;
public:
    ClientOrderContainer();
    int getSize(clientOrderContainer& clientOrderContainer);
    list <ClientOrder> getAll();
    ClientOrderContainer getClientOrders();
    ClientOrderContainer getClientOrdersByClient(Client* pClient, ClientOrderContainer& listClientOrderContainer);
    bool DidClientMadeOrder(Client* pClient, ClientOrderContainer& listClientOrderContainer);
    void setClients(ClientContainer* clients);
    void setMenu(Menu* menus);

}

#endif //CLIENTORDERCONTAINER_H
