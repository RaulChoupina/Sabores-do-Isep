//
// Created by HP on 27/05/2024.
//

#ifndef MENUVIEW_H
#define MENUVIEW_H

#include <iostream>
#include "Menu.h"
#include "View.h"

      class MenuView{
      public:
      Menu getMenu (const string& name);
      void printMenuClient (Menu & menu);
      void printMenuContainerClient (list < Menu >& menu, const string& listTitle);
      void printMenuContainerDono (list < Menu >& menu, const string& listTitle);
      string getName();
      void MenuUnavailable();
      };

#endif //MENUVIEW_H
