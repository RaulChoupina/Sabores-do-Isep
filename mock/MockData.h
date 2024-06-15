//
// Created by HP on 27/05/2024.
//

#ifndef MOCKDATA_H
#define MOCKDATA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "SaboresIsep"
#include <algorithm>
#include <string>

using namespace std;

class MockData(){
private:
     void loadMockClients(ClientContainer& clientContainer);
     void loadMockMenu(MenuContainer& menuContainer);
     void loadMockSuppliers(SupplierContainer& supplierContainer);
public:
     void generateData(SaboresIsep& saboresIsep);
}

#endif //MOCKDATA_H
