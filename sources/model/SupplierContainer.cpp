//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "SupplierContainer.h"

Container<Supplier> SupplierContainer:getAll() {
    Container <Supplier> SupplierContainer(this->suppliers);
    return newSupplierContainer;
}
Container<Supplier>:: iterator SupplierContainer::searchByEmail (string &Email) {
    auto it = this->suppliers.begin();
    for (; it != this->suppliers.end(); ++i) {
        if ((*it) == Email) {
            return it;
        }
    }
    return it;
}
Supplier *SupplierContainer::getByEmail(string& emais){
    auto it = searchByEmail(email);
    if (it != this ->suppliers.end()){
        return &(*it);
    }
    return nullptr;
}
void SupplierContainer:: addSupplier(const Supplier &supplier){
    string email = supplier.getEmail();
    auto it = searchByEmail (email);
    if (it == this ->suppliers.end()){
        this->suppliers.push_back(supplier);
    }else{
        string msg ="Supplier:"+ email;
        throw DuplicateDataException(msg);
    }
}
void SupplierContainer::toggleState (string& email){
    auto it =searchByName (email);
    if (it == this->suppliers.end()){
        this -> suppliers.push_back(supplier);
    }else{
        string msg ="Supplier:" + email;
        throw DuplicateDataException (msg);
    }
}
void SupplierContainer:: toogleState(string& email){
    auto it = searchByName(email);
    if(it != this-> suppliers.end()){
        it->toggleState();
    }
}