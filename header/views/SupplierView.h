//
// Created by cmgm on 27/05/2024.
//

#ifndef SABORES_DO_ISEP_SUPPLIERVIEW_H
#define SABORES_DO_ISEP_SUPPLIERVIEW_H

#include "Supplier.h"
#include "SupplierContainer.h"

       class SupplierView{
       public:
       string getSupplierName();
       void printSupplier (Supplier* supplier);
       void printSupplier (container<Supplier>& supplier);
       void invalidSupplier();
       void orderPlaced();
}

#endif //SABORES_DO_ISEP_SUPPLIERVIEW_H
