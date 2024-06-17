//
// Created by cmgm on 27/05/2024.
//

#ifndef SABORES_DO_ISEP_SUPPLIERVIEW_H
#define SABORES_DO_ISEP_SUPPLIERVIEW_H

#include <iostream>
#include <string>
#include "../model/Supplier.h"
#include "../model/SupplierContainer.h"
using namespace std;

       class SupplierView{
       public:
       string getSupplierName();
       void printSupplier (Supplier* supplier);
       void printSupplier (list<Supplier>& supplier);
       void InvalidSupplier();
       void OrderPlaced();
};

#endif //SABORES_DO_ISEP_SUPPLIERVIEW_H
