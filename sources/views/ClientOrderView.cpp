//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include <iomanip>
#include "ClientOrderView.h"
#include "Utils.h"

using namespace std;
void ClientOrderView:: OrderPlaced() {
    cout << "Order placed" << endl;
}
void ClientOrderView::printClientOrdersByClient(ClientOrderContainer &clientOrders, Client &client) {
    cout << "Orders placed by " << client.getName() << endl;
    cout << setw(PRICESPACING) << "Price" << endl;

    Client* clientPtr = &client;
    list<ClientOrder> tempClientOrders = clientOrders.getClientOrdersByClient(clientPtr, clientOrders).getAll();
    auto it = tempClientOrders.begin();
    for (int i = 1; it != tempClientOrders.end(); ++it, ++i){
        cout << setw(PRICESPACING) << it->getPrice() << endl;
    }
}
void ClientOrderView:: printAllClientOrders(ClientOrderContainer& ClientOrders){
    cout << "Clients orders" << endl;
    cout << setw(NAMESPACING) << "Name" << endl;
    cout << setw(PRICESPACING) << "Price" << endl;

    container < ClientOrder > tempClientOrders = ClientOrders.getAll();
    auto it = tempClientOrders.begin();
    for (int i = 1; it != tempClientOrders.end(); ++it, ++i){
        cout << setw(PRICESPACING) << it->getPrice() << endl;
        cout << setw(NAMESPACING) << it->getName() << endl;
    }
}
void ClientOrderView:: ThereAreNoOrders(){
     cout << "There are no orders";
     }
