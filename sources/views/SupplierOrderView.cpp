//
// Created by HP on 27/05/2024.
//

#include <iostream>
#include <iomanip> // Include iomanip for setw
#include "SupplierOrderView.h"
#include "Utils.h"

using namespace std;

std::string SupplierOrderView::getSupplierName() {
    return Utils::getString("Insert Supplier Name");
}

std::string SupplierOrderView::getMenuName() {
    return Utils::getString("Insert Menu Name");
}

std::string SupplierOrderView::getAmountInStock() {
    return "0";
}

void SupplierOrderView::OrderPlaced() {
    cout << "Order Placed" << endl;
}

void SupplierOrderView::printAllSupplierOrders(SupplierOrderContainer& supplierOrders) {
    cout << "Suppliers Orders" << endl;
    cout << setw(NAMESPACING) << "Name";
    cout << setw(PRICESPACING) << "SellingPrice" << endl;

    list<SupplierOrder> tempSupplierOrders = supplierOrders.getAll();
    for (auto it = tempSupplierOrders.begin(); it != tempSupplierOrders.end(); ++it) {
        cout << setw(NAMESPACING) << it->getSupplier()->getName();
        cout << setw(PRICESPACING) << it->getSellingPrice() << endl;
    }
}

void SupplierOrderView::ThereAreNoOrders() {
    cout << "There are no orders" << endl;
}

void SupplierOrderView::printSupplierOrdersBySupplier(SupplierOrderContainer& supplierOrders, Supplier& supplier) {
    cout << "Orders placed by " << supplier.getName() << endl;
    cout << setw(PRICESPACING) << "SellingPrice" << endl;

    list<SupplierOrder> tempSupplierOrders = supplierOrders.getSupplierOrdersBySupplier(&supplier, modelSupplierOrderContainer).getAll();
    for (auto it = tempSupplierOrders.begin(); it != tempSupplierOrders.end(); ++it) {
        cout << setw(PRICESPACING) << it->getSellingPrice() << endl;
    }
}
