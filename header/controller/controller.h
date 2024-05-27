//
// Created by HP on 27/05/2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "SaboresIsep.h"
#inlcude "View.h"
#inlcude "ClientView.h"
#inlcude "ClientOrderView.h"
#inlcude "SupplierView.h"
#inlcude "SupplierOrderView.h"
#inlcude "ProductView.h"

class controller{

private:
    SaboresIsep         model;
    View                view;
    ClientView          clientView;
    ClientOrderView     clientOrderView;
    SupplierView        supplierView;
    SupplierOrderView   supplierOrderView;
    ProductView         productView;

    void runClients();
    void runClientOrders();
    void runSuppliers();
    void runSupplierOrders();
    void runProducts();
public:
    controller(SaboresIsep& saboresIsep);
    void run();

};

#endif //CONTROLLER_H
