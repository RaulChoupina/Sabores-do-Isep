//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "MenuView.h"
#include "Utils.h"

using namespace std;

Menu MenuView::getMenu(const string& name){
     string Name;
     string Description;
     float SellingPrice;
     float SupplierPrice;
     int AmountInStock;
     string CategoryFood;

     Name = Utils:: getString("Name");
     Description = Utils:: getString("Description");
     SellingPrice = Utils:: getFloat("Price");
     SupplierPrice = Utils:: getFloat("Price");
     AmountInStock = Utils:: getNumber("AmountInStock");
     CategoryFood = Utils:: getString("CategoryFood");

     Menu menu ( Name , Description , SupplierPrice , SellingPrice , AmountInStock , CategoryFood);
     return Menu;
}
void MenuView::printMenuContainerClient (container < Menu >& menu, const string& containerTitle){
     cout << containerTitle << endl;
     cout << setw(PRICESPACING) << "Price";
     cout << "Name";

     cout << endl;
     for (auto it=menu.begin(); it != menu.end(); ++it){
     cout << setw(PRICESPACING) << it -> getSellingPrice();
     cout << " " << it->getName() << endl;
     }
}
void MenuView::printMenuClient (Menu & menu){
     cout << "Name          : " << menu->getName() << endl;
     cout << "Description   : " << menu->getDescription() << endl;
     cout << "Price         : " << menu->getSellingPrice() << endl;
     cout << "AmountInStock : " << menu->getAmountInStock() << endl;
     cout << "CategoryFood  : " << menu->getCategoryFood() << endl;
}
void MenuView::printMenuContainerDono (container < Menu >& menu, const string& containerTitle){
     cout << containerTitle << endl;
     cout << setw(PRICESPACING)<< "Price";
     cout << setw(QUANTITYSPACING) << "Qty";
     cout << setw(PRICESPACING+7)<< "Supplier Price" ;
     cout << " Name";

     cout << endl;
     for (auto it=menu.begin(); it != menu.end(); ++it){
     cout << setw(NAMESPACING) << it->getName();
     cout << setw(PRICESPACING) << it->getSellingPrice();
     cout << setw(PRICESPACING+7) << it->getSupplierPrice();
     cout << setw(QUANTITYSPACING) << it->getAmountInStock();
     cout << " " << it->getName() << endl;
     }
}
string MenuView:: getName(){
     string name;
     bool flag;
     do{
         name = Utils::getString("Insert Menu Name");
         flag = false;
         if(!Utils::stringAmountInStock(Name){
             flag = true;
             MenuUnavailable();
         }
     }
}
void MenuView::MenuUnavailable(){
     cout << "Menu is not available" << endl;
}