//
// Created by HP on 27/05/2024.
//

#ifndef VIEW_H
#define VIEW_H

#include <string>
#define NAMESPACING 15
#define USERNAMESPACING 15
#define PASSWORDSPACING 30
#define ADDRESSSPACING 30
#define NIFSPACING 18
#define QUANTITYSPACING 4
#define PRICESPACING 9

using namespace std;
     class View{
     public:
     View();
     int menuDono();
     int menuClient();
     int menuClientOrder();
     int menuMenu();
     int menuSupplier();
     int menuSupplierOrder();
}

#endif //VIEW_H
