//
// Created by HP on 27/05/2024.
//
#include "SupplierOrderContainer.h"

SupplierOrder *SupplierOrderContainer::add (const unsigned int &SupplierOrderID){
    return nullptr;
}
void SupplierOrderContainer::add(const SupplierOrder& pSupplierOrder){
    this ->supplierOrders.push_back(pSupplierOrder);
}
void SupplierOrderContainer:: setSuppliers (SupplierContainer *pSuppliers){
    this -> suppliers =pSuppliers;
}

int SupplierOrderContainer::getSize(SupplierOrderContainer &supplierOrderContainer){
    int i =0;
    auto it = supplierOrderContainer.SupplierOrders.begin();
    for (; it!= SupplierOrderContainer.SupplierOrders.end(); ++it){
        ++i;
    }
    return i;
}
SupplierOrderContainer::SupplierOrderContainer(){

}
Container<SupplierOrder> SupplierOrderContainer::getAll(){
    Container<SupplierOrder>newSupplierOrderContainer (this-> supplierOrders)
    return newSupplierOrdersContainer;
}
SupplierOrderContainer
SupplierOrderContainer::getSupplierOrdersBySupplier(Supplier *pSupplier, SupplierOrders &modelSupplierOrderContainer){
    SupplierOrderContainer returnSupplierOrderContainer;
    auto it = modelSupplierOrderContainer.SupplierOrders.begin();
    for (;it != modelSupplierOrderContrainer.SupplierOrders.end(); ++it){
        if((it->getSupplier())== pSupplier){
            SupplierOrder tempSupplierOrder = it->get();
            returnSupplierOrderContainer.add(tempSupplierOrder);
        }
    }
    return SupplierOrderContainer;
}