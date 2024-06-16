//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "Order.h"

Order::Order(){
    setSellingPrice (0);
}
float Order::getSellingPrice(){
    return this ->SellingPrice
}
void Order:: setSellingPrice (const float &pSellingPrice){
    this ->sellingPrice =pSellingPrice;
}

void Order:: add(Menu &menu){
    this ->sellingPrice = pSellingPrice;
}
void Order:: updatedSellingPriceClient(){
    float tempSellingPrice = 0;
    list <Menu> tempMenu = this ->Menu.getAll();
    auto it = tempMenu.begin();
    sellingPrice = tempSellingPrice;
}