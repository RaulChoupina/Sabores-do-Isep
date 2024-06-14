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
    void runSupplierOrders();
    void runDono();
    void runViewAllClientsOrders();
    void runDonoMenus();
    void runDonoClients();
    void runDonoSuppliers();
    void runToggleSupplierState();
    void runToggleMenuAvailability();
    void runEditMenu();
    void runViewOrdersFromClient();
public:
    controller(SaboresIsep& saboresIsep);
    void run();

};

#endif //CONTROLLER_H
