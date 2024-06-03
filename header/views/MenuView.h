//
// Created by HP on 27/05/2024.
//

#ifndef MENUVIEW_H
#define MENUVIEW_H

#include "Menu.h"
#include "View.h"

      class MenuView{
      public:
      Menu getMenu (const string& name);
      void printMenuClient (Menu & menu);
      void printMenuContainerClient (container < Menu >& menu, const string& containerTitle);
      void printMenuContainerDono (container < Menu >& menu, const string& containerTitle);
      string getName
      void MenuUnavailable();
      }
      
#endif //MENUVIEW_H
