//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "SupplierOrder.h"
#include "Utils.h"

SupplierOrder:: SupplierOrder (Supplier *pSupplier,float SupplierPrice){
    this-> setSupplier(pSupplier);
}
void SupplierOrder:: setSupplier (supplier *pSupplier){
    if (psupplier !=nullptr){
        this->supplier =pSupplier;
    }else{
        string msg = "Supplier = NULL";
        throw InvalidDataException(msg);
    }
}
Supplier *SupplierOrder::getSupplier(){
    return this->supplier;
}
SupplierOrder &SupplierOrder::get(){
    return *this
}