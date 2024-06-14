//
// Created by HP on 27/05/2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include < iostream>
#include "SaboresIsep.h"
#include "View.h"
#include "ClientView.h"
#include "ClientOrderView.h"
#include "SupplierView.h"
#include "SupplierOrderView.h"
#include "ProductView.h"

class controller{

private:
    SaboresIsep         model;
    View                view;
    ClientView          clientView;
    ClientOrderView     clientOrderView;
    SupplierView        supplierView;
    SupplierOrderView   supplierOrderView;
    MenuView            menuView;

    void runLogin();
    void runCreateAccount();
    void runClients();
    void runMenus();
    void runClientOrders();
    void runSuppliers();
    void runSupplierOrders();
    void runMenu();
    void runDono();
    void runViewAllClientsOrders();
    void runManageMenus();
    void runManageClients();
    void runManageSuppliers();
    void runToggleSupplierState();
    void runEditMenu();
public:
    controller(SaboresIsep& saboresIsep);
    void run();

};

#endif //CONTROLLER_H
