//
// Created by HP on 27/05/2024.
//
#include "Order.h"

Order::Order(){
    setValue (0);
}
float Order::getValue(){
    return this ->value
}
void Order:: setValue (cont float &pValue){
    this ->value =pValue;
}

void Order:: add(Menu &menu){
    this ->value = pValue;
}

string Order:: getDate(){
    return this -> date.getDate();
}
void Order:: updatedValueClient(){
    float tempValue = 0;
    Container<Menu> tempMenu = this ->Menu.getAll();
    auto it = tempMenu.begin();
    value =tempValue;
}