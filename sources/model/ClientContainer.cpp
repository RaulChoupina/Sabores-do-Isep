//
// Created by HP on 27/05/2024.
//
#include "ClientContainer.h"

Container<Client> :: iterator ClientContainer:: searchByEmail(string &Email){
    auto it =this->clients.begin();
    for(; it!= this->clients.end(); ++it){
        if((*it)== Email){
            return it;
        }
    }
    return it;
}
