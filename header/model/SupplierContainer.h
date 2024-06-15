//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIERCONTAINER_H
#define SUPPLIERCONTAINER_H

#include <iostream>
#include <list>
#include "Supplier.h"

class SupplierContainer{
private:
    list<Supplier> supplier;
    list<Supplier>:: iterator searchByName(string& name);
public:
    supplier* getByName(string& name);
    list<Supplier> getAll();
    void addSupplier(const Supplier& supplier);
    void toggleState(string& name);
}
#endif //SUPPLIERCONTAINER_H
