//
// Created by HP on 27/05/2024.
//

#ifndef CLIENTCONTAINER_H
#define CLIENTCONTAINER_H
#include <list>
#include "Client.h"
#include <string>

class ClientContainer{
private:
    list<Client> clients;
    list<Client>::iterator searchByEmail(string& email);
public:
    list<Client> getAll();
    Client* getByEmail(string& email);
    void addClient(Client& client);

#endif //CLIENTCONTAINER_H
