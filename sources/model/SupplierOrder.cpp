//
// Created by HP on 27/05/2024.
//
#include "SupplierOrder.h"
#include "Utils.h"

SupplierOrder:: SupplierOrder (Supplier *pSupplier,float value){
    this-> setSupplier(pSupplier);
    this-> setValue(value);
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