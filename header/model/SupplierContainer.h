//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIERCONTAINER_H
#define SUPPLIERCONTAINER_H

#include <iostream>
#include <container>
#include "Supplier.h"

class SupplierContainer{
private:
    container<Supplier> supplier;
    container<Supplier>:: iterator searchByName(string& name);
public:
    supplier* getByName(string& name);
    container<Supplier> getAll();
    void addSupplier(const Supplier& supplier);
    void toggleState(string& name);
}
#endif //SUPPLIERCONTAINER_H
