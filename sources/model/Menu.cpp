//
// Created by HP on 27/05/2024.
//
#include "Menu.h"
#include <iostream>
Menu::menu(const string &name,
           const string &description,
           const string &categoryFood,
           int amountInStock,
           float supplierPrice,
           float sellingPrice);

void Menu::setMenuName(const string &name) {
    this->name = name;

}
void Menu::setDescription(const string &description) {
    this->description = description;

}
void Menu::setCategoryFood(const string &categoryFood) {
    this->categoryFood = categoryFood;

}
void Menu::setAmountInStock(int amountInStock) {
    this->amountInStock = amountInStock;
}
void Menu::setSellingPrice(float sellingPrice) {
    this->sellingPrice = sellingPrice;
}
void Menu::setSupplierPrice(float supplierPrice) {
    this->supplierPrice = supplierPrice;
}
void Menu::set  Available()
{
    this->isAvailable = true;
}
void Menu::setUnavailable()
{
    this->isAvailable = false;
}
float Menu::getSellingPrice() const {
    return this->sellingPrice;
}
float Menu::getSupplierPrice() const {
    return this->supplierPrice;
}
const string &Menu::getName() const {
    return this->name;
}
const string &Menu::getDescription() const {
    return this->description;
}
const string &Menu::getCategoryFood() const {
    return this->category;
}
int Menu::getAmountInStock() const {
    return this->stock;
}
bool Menu::getIsAvailable() const {
    return this->isAvailable;
}
Menu &Menu::get(){
    return *this;
}
