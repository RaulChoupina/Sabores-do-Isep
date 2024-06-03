//
// Created by cmgm on 27/05/2024.
//

#ifndef SABORES_DO_ISEP_CLIENTORDERVIEW_H
#define SABORES_DO_ISEP_CLIENTORDERVIEW_H

#include "ClientOrder.h"
#include "ClientOrderContainer.h"
#include "View.h"

      class ClientOrderView{
      public:
      ClientOrder getClientOrder();
      void printClientOrdersByClient(ClientOrderContainer& ClientOrders, Client& client);
      void printAllClientOrders (ClientOrderContainer& ClientOrders);
      void ViewAllClientsOrders ();

}
#endif //SABORES_DO_ISEP_CLIENTORDERVIEW_H
