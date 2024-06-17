#ifndef MENUVIEW_H
#define MENUVIEW_H

#include <iostream>
#include <list>
#include "../model/Menu.h"
#include "Utils.h"

using namespace std;

class MenuView {
public:
    Menu getMenu(const string& name);
    void printMenuContainerClient(list<Menu>& menu, const string& listTitle);
    void printMenuClient(Menu& menu);
    void printMenuContainerDono(list<Menu>& menu, const string& listTitle);
    string getName();
    void MenuUnavailable();
};

#endif // MENUVIEW_H
