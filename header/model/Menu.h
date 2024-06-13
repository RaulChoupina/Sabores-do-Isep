//
// Created by HP on 27/05/2024.
//

#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

class Menu{
    private:
        string name;
        float supplierPrice;
        float sellingPrice;
        string categoryFood;
        string description;
        int amountInStock;
    public:
    Menu(
            const string& name
            const string& categoryFood
            const string& description
            float supplierPrice
            float sellingPrice
            int amountInStock
            );
    void setMenuName(const string& name);
    void setCategoryFood(const string& categoryFood);
    void setDescription(const string& description);
    void setSupplierPrice(float supplierPrice);
    void setSellingPrice(float sellingPrice);
    void setAmountInStock(int amountInStock);

    Menu& get();
    const string& getName() const;
    const string& getCategoryFood() const;
    const string& getDescription() const;
    float getSupplierPrice() const;
    float getSellingPrice() const;
    int getAmountInStock() const;
}

#endif //MENU_H
