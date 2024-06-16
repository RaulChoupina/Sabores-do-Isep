//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIERORDERCONTAINER_H
#define SUPPLIERORDERCONTAINER_H

#include <iostream>
#include "SupplierContainer.h"
#include "SupplierOrder.h"
#include "MenuContainer.h"

using namespace std;

class SupplierOrderContainer{
private:
      list < SupplierOrder > supplierOrders;
      SupplierContainer* suppliers;
      MenuContainer* menus;
public:
      SupplierOrderContainer();
      SupplierOrder* get(const unsigned int& supplierOrderID);
      int getSize(SupplierOrderContainer& supplierOrderContainer);
      void add(const SupplierOrder& pSupplierOrder);
      void setMenus(MenuContainer& pMenus);
      void setSuppliers(SupplierContainer& pSuppliers);
      list < SupplierOrder > getAll();
      SupplierOrderContainer getSupplierOrdersBySupplier(Supplier* pSupplier, SupplierOrderContainer& modelSupplierOrderContainer);
};
#endif //SUPPLIERORDERCONTAINER_H
