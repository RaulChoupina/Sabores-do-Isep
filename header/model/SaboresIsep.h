//
// Created by HP on 27/05/2024.
//

#ifndef SABORESISEP_H
#define SABORESISEP_H

#include <iostream>
#include <string.h>
#include "DonoContainer.h"
#include "ClientContainer.h"
#include "ClientOrderContainer.h"
#include "MenuContainer.h"
#include "SupplierOrderContainer.h"
#include "SupplierContainer.h"

using namespace std;


    class SaboresIsep {
    private:
      string name;
      DonoContainer dono;
      ClientContainer clients;
      ClientOrderContainer clientorders;
      MenuContainer menus;
      SupplierOrderContainer supllierorders;
      SupplierContainer Suppliers;

      void setDataforConsistency();
      public:
      SaboresIsep();
      SaboresIsep(const string& name);
      string& getName();
      void setDono( string pEmail, string pPassword);

      DonoContainer & getDonoContainer();
      ClientContainer & getClientContainer();
      ClientOrderContainer & getClientOrderContainer();
      MenuContainer & getMenuContainer();
      SupplierOrderContainer & getSupplierOrderContainer();
      SupplierContainer & getSupplierContainer();

};
#endif //SABORESISEP_H
