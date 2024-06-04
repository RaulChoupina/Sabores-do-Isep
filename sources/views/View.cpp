//
// Created by HP on 27/05/2024.

#include <iostream>
#include "View.h"
#include "Utils.h"

using namespace std;

View::View(){
}
int View::menuMain(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Main Menu       |\n";
        cout << " |                       |\n";
        cout << " | 1 - Login             |\n";
        cout << " | 2 - View Products     |\n";
        cout << " |                       |\n";
        cout << " | 0 - Go Back           |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2);
    return op;
}
//Manager View Interface
int View::menuManager(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Manager Menu            |\n";
        cout << " |                               |\n";
        cout << " | 1 - Manage products           |\n";
        cout << " | 2 - Manage clients & Orders   |\n";
        cout << " | 3 - Manage Suppliers & Orders |\n";
        cout << " |                               |\n";
        cout << " | 0 - Go Back                   |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 3);
    return op;
}
int View::menuSuppliers(){
    int op = -1;
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
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 3);
    return op;
}
int View::menuClient(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Client Menu                  |\n";
        cout << " |                                    |\n";
        cout << " | 1 - View a list of all clients     |\n";
        cout << " | 2 - View all orders from clients   |\n";
        cout << " |                                    |\n";
        cout << " | 0 - Go Back                        |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2);
    return op;
}
int View::menuProducts(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Products Menu     |\n";
        cout << " |                         |\n";
        cout << " | 1 - Add products        |\n";
        cout << " | 2 - Personal data       |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2);
    return op;
}
//Client View Interface
int View::menuClient(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Client Menu       |\n";
        cout << " |                         |\n";
        cout << " | 1 - View products       |\n";
        cout << " | 2 - View order          |\n";
        cout << " | 3 - Make the order      |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 3);
    return op;
}
int View::menuProducts(){
    int op = -1;
    do{
        cout << "\n  -----------------------\n";
        cout << " |       Products Menu     |\n";
        cout << " |                         |\n";
        cout << " | 1 - Payment method      |\n";
        cout << " | 2 - Personal data       |\n";
        cout << " |                         |\n";
        cout << " | 0 - Go Back             |\n";
        cout << "  -----------------------\n";
        op = Utils::getNumber("Option");
    }while(op < 0 || op > 2);
    return op;
}

