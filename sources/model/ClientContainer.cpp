//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "ClientContainer.h"

Container <Client> :: iterator ClientContainer:: searchByEmail(string &Email){
    auto it =this->clients.begin();
    for(; it!= this->clients.end(); ++it){
        if((*it)== Email){
            return it;
        }
    }
    return it;
}
Container<Client> ClientContainer:: getAll(){
    list<Client> newClientContainer(this->clients);
    return newClientContainer;
}
Client* ClientContainer::getByEmail(string &Email){
    auto it= searchByEmail(Email);
    if(it != this->clients.end()){
        return &(*it);
    }
    return nullptr;
}
void ClientContainer::addClient(Client &client) {
    string Email= client.getEmail();
    auto it == searchByEmail(Email);
    if(it== this->clients.end()){
        this->clients.push_back(client);
    }else{
        string msg ="Client:" + Email;
        throw DuplicatedDataException(msg);
    }
}
void ClientContainer:: setActive(string &clientEmail){

}
void ClientContainer:: setInactive(string &clientEmail){
    
}