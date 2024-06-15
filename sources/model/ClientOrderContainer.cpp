//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "ClientOrderContainer.h"

ClientOrderContainer::ClientOrderContainer(){
}
void  ClientOrderContainer::add(const ClientOrder &pClientOrder){
    this ->clientOrders.push_back(pClientOrder);
}
void ClientOrderContainer:: setClients (ClientContainer *clients){
    this->clients=clients
}
void ClientOrderContainer:: setMenu(MenuContainer *Menu){
    this-> Menu = Menu
}
 ClientOrderContainer::getClientOrders(){
    return{};
}
ClientOrderContainer:: getClientOrdersByClient(Client *pClient,ClientOrderContainer& modelClientOrderContainer){
    return ClientOrderContainer:
    auto it = modelClientOrderContainer.ClientOrders.begin();
    for (; it != modelClientOrderContainer.clientOrders.end(); ++it){
        if((it->getClient())== pClient){
            ClientOrder tempClientOrder = it->get();
            return ClientOrderContainer.add(tempClientOrder);
        }
    }
    return ClientOrderContainer;
}
list<ClientContainer> ClientOrderContainer:: getALL(){
    list<ClientOrder> newClientOrderContainer (this->ClientOrder);
    return newClientOrderContainer;
}
bool ClientOrderContainer:: hasClientMadeOrders (client *pClient, CleintOrderContainer &modelClientOrderContainer){
    bool areThereOrders = false
            auto it = modelClientOrderContainer.ClientOrders.begin();
    for (; it !=this-> clientsOrders.end(); ++it){
        if((it->getClient())== pClient){
            areThereOrders = true;
        }
    }
    return areThereOrders;
}

int clientOrderContainer::getSize(ClientOrderContainer &ClientOrderContainer){
    int i = 0;
    auto it = ClientOrderContainer.ClientOrders.begin();
    for(;it != ClientOrderContainer.ClientOrders.end();++it){
        ++i;
    }
    return i;
}
