//
// Created by HP on 27/05/2024.
//
#include <iosteam>
#include "MenuContainer"

container<Menu>::iterator MenuContainer::search(const string& name) {
    auto it = this->menus.begin();
    for (; it != this->menus.end(); ++it){
        if((it->getName()) == name){
            return it;
        }
    }
    return it;
}

container<Menu>::iterator MenuContainer::search(const Product &obj) {
    auto it = this->menus.begin();
    for (; it != this->menus.end(); ++it){
        if((it->getName()) == obj.getName()){
            return it;
        }
    }
    return it;}
Container<Menu> MenuContainer::getAll() {
    container<Menu> newMenuContainer (this->menus);
    return newMenuContainer;
}
Menu* MenuContainer::get(const string& name) {
    auto it = search(name);
    if(it != this->menus.end()){
        return &(*it);
    }
    return nullptr;
}
void MenuContainer::add(const Menu obj) {
    auto it = search(obj);
    if(it == this->menus.end()){
        this->menus.push_back(obj);
    }else{
        string msg = "Menu: " + obj.getName();
        throw DuplicatedEntryException(msg);
    }
}
void MenuContainer::edit(const string &name, const string &description, const string &categoryFood, int amountInStock, float supplierPrice, float sellingPrice){
     container < Menu >::iterator it = search(name);
     if(it !=this ->menus.end()){
     it -> setMenuName(name);
     it -> setMenuCategoryFood(categoryFood);
     it -> setMenuDescription(description);
     it -> setMenuAmountInStock(amountInStock);
     it -> setMenuSupplierPrice(supplierPrice);
     it -> setMenuSellingPrice(sellingPrice);
     }
}
void MenuContainer::reset() {
    this-> menus.clear();
}
