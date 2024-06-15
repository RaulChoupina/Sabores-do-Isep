//
// Created by HP on 27/05/2024.
//

#ifndef MENUCONTAINER_H
#define MENUCONTAINER_H

#include <iostream>
#include "DuplicatedEntryException.h"
#include <list>
#include "Menu.h"

class MenuContainer{
private:
     list < Menu > menus;
     list < Menu >:: iterator search(const string& name);
     list < Menu >:: iterator search(const Menu& obj);
     list < Menu >:: iterator searchByName(string& name);
public:
     list < Menu > getAll();
     ProductContainer getAvailable();
     Menu* get(const string& name);
     void add (Menu obj);
     void edit(
          const string& name,
          const string& categoryFood,
          const string& description,
          float supplierPrice,
          float sellingPrice,
          int amountInStock,
          bool isAvailable);
void reset();
}
#endif //MENUCONTAINER_H
