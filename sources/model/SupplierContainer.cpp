//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "../model/SupplierContainer.h"

using namespace std;

list<Supplier> SupplierContainer :: getAll() {
    list <Supplier> SupplierContainer(this->suppliers);
    return newSupplierContainer;
}
list<Supplier>:: iterator SupplierContainer::searchByName (string &Name) {
    auto it = this->suppliers.begin();
    for (; it != this->suppliers.end(); ++i) {
        if ((*it) == Name) {
            return it;
        }
    }
    return it;
}
Supplier *SupplierContainer::getByName(string& name){
    auto it = searchByName(name);
    if (it != this ->suppliers.end()){
        return &(*it);
    }
    return nullptr;
}
void SupplierContainer:: addSupplier(const Supplier &supplier){
    string name = supplier.getName();
    auto it = searchByName (name);
    if (it == this ->suppliers.end()){
        this->suppliers.push_back(supplier);
    }else{
        string msg ="Supplier:"+ name;
        throw DuplicateDataException(msg);
    }
}
void SupplierContainer::toggleState (string& name){
    auto it =searchByName(name);
    if (it == this->suppliers.end()){
        this -> suppliers.push_back(supplier);
    }else{
        string msg ="Supplier:" + email;
        throw DuplicateDataException (msg);
    }
}
void SupplierContainer:: toogleState(string& name){
    auto it = searchByName(name);
    if(it != this-> suppliers.end()){
        it->toggleState();
    }
}