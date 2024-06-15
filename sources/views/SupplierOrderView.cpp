//
// Created by HP on 27/05/2024.
//

#include <iostream>
#include "SupplierOrderView.h"
#include "Utils.h"

string SupplierOrderView:: getName(){
    return Utils::getString("Insert Supplier Name");
}
string SupplierOrderView:: getName(){
    return Utils::getString("Insert Menu Name");
}
string SupplierOrderView:: getAmountInStock(){
    return "0";
}
string SupplierOrderView:: OrderPlaced(){
   cout << "Order Placed";
}
void SupplierOrderView::printAllSupplierOrders(SupplierOrderContainer& supplierOrders){
     cout << "Suppliers Orders" << endl;
     cout << setw(NAMESPACING) << "Name";
     cout << setw(PRICESPACING) << "Price" << endl;

     container < SupplierOrder > tempSupplierOrders = SupplierOrders.getAll();
     auto it = tempSupplierOrders.begin();
     for (int i = 1; it != tempSupplierOrders.end(); ++it, ++i){
         cout << setw(NAMESPACING) << it-> getSupplier()-> getName();
         cout << setw(PRICESPACING) << it-> getPrice() << endl;
     }
}
void SupplierOrderView:: ThereAreNoOrders(){
     cout << "There are no orders";
}
void SupplierOrderView:: printSupplierOrdersBySupplier(SupplierOrderConstainer& supplierOrders, Supplier& supplier){
    cout << "Orders placed by " << supplier.getName() << endl;
    cout << setw(PRICESPACING) << "Value" << endl;

    Supplier* supplierPtr = &supplier;
    list <SupplierOrder> tempSupplierOrders = supplierOrders.getSupplierOrdersBySupplier(supplierPtr, supplierOrders).getAll();
    auto it = tempSupplierOrders.begin();
    for (int i = 1; it != tempSupplierOrders.end(); ++it, ++i){
        cout << setw(PRICESPACING) << it->getValue() << endl;
    }
}

