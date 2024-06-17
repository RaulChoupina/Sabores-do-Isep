#ifndef SABORES_DO_ISEP_CLIENTVIEW_H
#define SABORES_DO_ISEP_CLIENTVIEW_H

#include <iostream>
#include <string>
#include "../model/Client.h"
#include "../model/ClientContainer.h"

using namespace std;

class ClientView {
public:
    string getEmail();
    string getPassword();
    string getName();
    string getAddress();
    void invalidEmail();
    void incorrectPassword();
    void printClientContainerDono(const list<Client>& clients, const string& listTitle); // Parâmetro clients é const
    void ClientNotFound();
};

#endif // SABORES_DO_ISEP_CLIENTVIEW_H
