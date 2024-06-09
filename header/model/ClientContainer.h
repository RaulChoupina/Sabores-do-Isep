//
// Created by HP on 27/05/2024.
//

#ifndef CLIENTCONTAINER_H
#define CLIENTCONTAINER_H

#include <iostream>
#include <container>
#include "Client.h"
#include <string>

class ClientContainer{
private:
    container<Client> clients;
    container<Client>::iterator searchByEmail(string& email);
public:
    container<Client> getAll();
    Client* getByEmail(string& email);
    void addClient(Client& client);

#endif //CLIENTCONTAINER_H
