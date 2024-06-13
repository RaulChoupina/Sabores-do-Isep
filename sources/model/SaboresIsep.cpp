//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "SaboresIsep"

using namespace std;

SaboresIsep:: SaboresIsep(){
    setDataForConsistency();
}
SaboresIsep:: SaboresIsep(const string &email){
     this-> email=email;
     setDataForConsintency();
}
string &Sabores::getEmail(){
    return email;
}
ClientContainer &SaboresIsep::getClientOrderConteiner(){
    return this->ClientOrders;
}
SupplierContainer &SaboresIsep::getSupplierContainer(){
    return this-> clientOrders;
}
SupplierOrderContainer &SaboresIsep::getSupplierOrderContainer(){
    return this->suppliersOrders;
}
MenuContainer &SaboresIsep:: getMenuContainer(){
    return this ->Menu;
}
void SaboresIsep::setDataForConsistency() {
    this->clientOrders.setClients(&this->clients);
    this->clientOrders.setMenu(&this->Menu);
    this->supplierOrders.setMenu(&this->Menu);
    this->supplierOrders.setSuppliers(&this->suppliers);
}
void SaboresIsep:: setDono(string pEmail,string pPassword){
    this->Dono.set(pEmail,pPassword);
}