//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIERORDER_H
#define SUPPLIERORDER_H

#include <iostream>
#include "Order.h"
#include "Menu.h"
#include "Supplier.h"

class SupplierOrder :public order{
private:
    Supplier* supplier{};
public:
    SupplierOrder() = default;
    SupplierOrder(Supplier* pSupplier, float SupplierPrice);
    void setSupplier(Supplier* pSupplier);
    Supplier* getSupplier();

    SupplierOrder &get();
};

#endif //SUPPLIERORDER_H
