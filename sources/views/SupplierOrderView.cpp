//
// Created by HP on 27/05/2024.
//

#include <iostream>
#include "SupplierOrderView.h"
#include "Utils.h"

using namespace std;

string SupplierOrderView:: getSupplierName(){
    return Utils::getString("Insert Supplier Name");
}
string SupplierOrderView:: getMenuName(){
    return Utils::getString("Insert Menu Name");
}
string SupplierOrderView:: getAmountInStock(){
    return "0";
}
string SupplierOrderView:: OrderPlaced(){
   cout << "Order Placed" << endl;
}
void SupplierOrderView::printAllSupplierOrders(SupplierOrderContainer& supplierOrders){
     cout << "Suppliers Orders" << endl;
     cout << setw(NAMESPACING) << "Name";
     cout << setw(PRICESPACING) << "SellingPrice" << endl;

     list < SupplierOrder > tempSupplierOrders = SupplierOrders.getAll();
     auto it = tempSupplierOrders.begin();
     for (int i = 1; it != tempSupplierOrders.end(); ++it, ++i){
         cout << setw(NAMESPACING) << it-> getSupplier()-> getName();
         cout << setw(PRICESPACING) << it-> getSellingPrice() << endl;
     }
}
void SupplierOrderView:: ThereAreNoOrders(){
     cout << "There are no orders" << endl;
}
void SupplierOrderView:: printSupplierOrdersBySupplier(SupplierOrderConstainer& supplierOrders, Supplier& supplier){
    cout << "Orders placed by " << supplier.getName() << endl;
    cout << setw(PRICESPACING) << "SellingPrice" << endl;

    Supplier* supplierPtr = &supplier;
    list <SupplierOrder> tempSupplierOrders = supplierOrders.getSupplierOrdersBySupplier(supplierPtr, supplierOrders).getAll();
    auto it = tempSupplierOrders.begin();
    for (int i = 1; it != tempSupplierOrders.end(); ++it, ++i){
        cout << setw(PRICESPACING) << it->getSellingPrice() << endl;
    }
}

