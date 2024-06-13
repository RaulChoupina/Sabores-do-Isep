//
// Created by HP on 27/05/2024.
//

#ifndef MENUCONTAINER_H
#define MENUCONTAINER_H

#include <iostream>
#include "DuplicatedEntryException.h"
#include <container>
#include "Menu.h"

class MenuContainer{
private:
     container < Menu > menus;
     container < Menu >:: iterator search(const string& name);
     container < Menu >:: iterator search(const Menu& obj);
     container < Menu >:: iterator searchByName(string& name);
public:
     container < Menu > getAll();
     Menu* get(const string& name);
     void add (Menu obj);
     void edit(
          const string& name,
          const string& categoryFood,
          const string& description,
          float supplierPrice,
          float sellingPrice,
          int amountInStock);
void reset();
}
#endif //MENUCONTAINER_H
