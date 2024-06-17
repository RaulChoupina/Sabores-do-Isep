//
// Created by cmgm on 27/05/2024.
//

#ifndef SABORES_DO_ISEP_CLIENTORDERVIEW_H
#define SABORES_DO_ISEP_CLIENTORDERVIEW_H

#include <iostream>
#include "../model/ClientOrder.h"
#include "../model/ClientOrderContainer.h"
#include "View.h"

      class ClientOrderView{
      public:
      ClientOrder getClientOrder();
      void printClientOrdersByClient(ClientOrderContainer& ClientOrders, Client& client);
      void printAllClientOrders (ClientOrderContainer& ClientOrders);
      void ViewAllClientsOrders ();
      void ViewOrdersFromClient();
      void OrderPlaced();
      void ThereAreNoOrders();

};
#endif //SABORES_DO_ISEP_CLIENTORDERVIEW_H
