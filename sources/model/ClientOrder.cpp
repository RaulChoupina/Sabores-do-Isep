//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "../model/ClientOrder.h"
#include "Utils.h"
#include "InvalidDataException.h"

ClientOrder :: ClientOrder (Client* client,float SellingPrice){
    this->setClient(client);
    this->setSellingPrice (SellingPrice);
}
void ClientOrder:: setClient(client *pClient){
    if(pClient != nullptr){
        this->client = pClient;
    }else{
        this ->client =nullptr;
        string msg = "ClientOrder : Client =Null";
        throw InvalidDataException(msg);
    }
}

Client * ClientOrder:: getClient(){
    return this -> Client;
}
ClientOrder &ClientOrder:: get(){
    return *this;
}