//
// Created by HP on 27/05/2024.

#include <iostream>
#include "View.h"
#include "Utils.h"

using namespace std;

View::View(){
}
int View::menuMain(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Main Menu       |\n";
        cout << " |                       |\n";
        cout << " | 1 - Login             |\n";
        cout << " | 2 - View Menus        |\n";
        cout << " |                       |\n";
        cout << " | 0 - Go Back           |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 2);
    return op;
}
//Manager View Interface
int View::menuDono(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Dono Menu               |\n";
        cout << " |                               |\n";
        cout << " | 1 - Dono products           |\n";
        cout << " | 2 - Dono clients & Orders   |\n";
        cout << " | 3 - Dono Suppliers & Orders |\n";
        cout << " |                               |\n";
        cout << " | 0 - Go Back                   |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 3);
    return val;
}
int View::menuSuppliers(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Suppliers Menu           |\n";
        cout << " |                                |\n";
        cout << " | 1 - Place order to supplier    |\n";
        cout << " | 2 - View all suppliers orders  |\n";
        cout << " | 3 - View orders from suppliers |\n";
        cout << " |                                |\n";
        cout << " | 0 - Go Back                    |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 3);
    return val;
}
int View::menuClient(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Client Menu                  |\n";
        cout << " |                                    |\n";
        cout << " | 1 - View a container of all clients |\n";
        cout << " | 2 - View all orders from clients   |\n";
        cout << " |                                    |\n";
        cout << " | 0 - Go Back                        |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 2);
    return val;
}
int View::menuMenu(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |        Menu             |\n";
        cout << " |                         |\n";
        cout << " | 1 - Add Menu            |\n";
        cout << " | 2 - Personal data       |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 2);
    return val;
}
//Client View Interface
int View::menuClient(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Client Menu       |\n";
        cout << " |                         |\n";
        cout << " | 1 - View menus          |\n";
        cout << " | 2 - View order          |\n";
        cout << " | 3 - Make the order      |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        val = Utils::getNumber("Value");
    }while(val < 0 || val > 3);
    return val;
}
int View::menuMenu(){
    int val = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |        Menu             |\n";
        cout << " |                         |\n";
        cout << " | 1 - Payment method      |\n";
        cout << " | 2 - Personal data       |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Value");
    }while(val < 0 || val > 2);
    return val;
}

