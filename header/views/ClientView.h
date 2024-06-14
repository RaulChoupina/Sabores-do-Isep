//
// Created by cmgm on 27/05/2024.
//

#ifndef SABORES_DO_ISEP_CLIENTVIEW_H
#define SABORES_DO_ISEP_CLIENTVIEW_H

#include <iostream>
#include "Client.h"
#include "ClientContiner.h"

       class ClientView{
       public:
       string getEmail();
       string getPassword();
       string getName();
       string getAddress();
       unsigned int getNif();
       void invalidEmail();
       void incorrectPassword();
       void printClientContainerDono(container<Client>& clients, const string& containerTitle);
       void ClientNotFound ();

}
#endif //SABORES_DO_ISEP_CLIENTVIEW_H
