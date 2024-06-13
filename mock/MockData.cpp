//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "MockData.h"

void MockData:: loadMockClients (ClientContainer& clientContainer){
    int rows = 100;
    int cols = 5;
    string data[rows][cols];

    ifstream file("../data/mockClients.csv");

    if (!file.is_open()) {
        cout << "File not opened" << endl;
        return;
    }

    for(int row = 0; row < rows; ++row)
    {
        string line;
        getline(file, line);

        stringstream iss(line);

        for (int col = 0; col < cols; ++col)
        {
            string val;
            getline(iss, val, ',');
            data[row][col] = val;
        }
    }
    for(int i = 1; i < rows; ++i){
        Client client(data[i][0], data[i][1], data[i][2], data[i][3], stoi(data[i][4]));
        clientContainer.addClient(client);
    }
}
void MockData::generateData(SaboresIsep& saboresIsep){
     loadMockClients (SaboresIsep.getClientContainer());
     loadMockMenu (SaboresIsep.getMenuContainer());
     loadMockSupplier (SaboresIsep.getSupplierContainer());
}
void MockData:: loadMockMenu (MenuContainer& menuContainer){
     int rows = 10;
     int cols = 6;
     string data[rows][cols];

     ifstream file("../data/mockClients.csv");

     if (!file.is_open()) {
        cout << "File not opened" << endl;
        return;
     }
     for (int rows = 0; row < rows; ++rows){
     string val;
     getline(iss,val, ';');
     data[row][col] = val;
     }
}
for(int i = 1; i < rows; ++i){
    replace(data[i][4].begin(), data[i][4].end(), ',','.');
    replace(data[i][5].begin(), data[i][5].end(), ',','.');

    Menu menu(data[i][0],
                    data[i][1],
                    data[i][2],
                    stoi(data[i][3]),
                    stof(data[i][4]),
                    stof(data[i][5]));
    menuContainer.add(menu);
    }
}
void MockData:: loadMockSuppliers (SupplierContainer& supplierContainer){
    int rows = 10;
    int cols = 2;
    string data[rows][cols];

    ifstream file("../data/mockSuppliers.csv");

    if (!file.is_open()) {
        cout << "File not opened" << endl;
        return;
    }
    for(int row = 0; row < rows; ++row)
    {
        string line;
        getline(file, line);

        stringstream iss(line);

        for (int col = 0; col < cols; ++col)
        {
            string val;
            getline(iss, val, ',');
            data[row][col] = val;
        }
    }
    for(int i = 1; i < rows; ++i){
        bool available = stoi(data[i][1]) ;
        Supplier supplier(data[i][0], available);
        supplierContainer.addSupplier(supplier);
    }
}


