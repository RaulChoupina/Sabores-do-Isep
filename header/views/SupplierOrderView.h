//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIERORDERVIEW_H
#define SUPPLIERORDERVIEW_H

#include <iostream>
#include "../model/SupplierOrder.h"
#include "View.h"
#include "../model/SupplierOrderContainer.h"

class SupplierOrderView { // Renamed class to SupplierOrderView
public:
    SupplierOrder getSupplierOrder();
    std::string getSupplierName(); // Added std:: namespace for string
    std::string getMenuName();
    std::string getAmountInStock();
    void printSupplierOrdersBySupplier(SupplierOrderContainer& supplierOrders, Supplier& supplier);
    void printAllSupplierOrders(SupplierOrderContainer& supplierOrders);
    void OrderPlaced();
    void ThereAreNoOrders();
};

#endif // SUPPLIERORDERVIEW_H
