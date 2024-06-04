//
// Created by HP on 27/05/2024.
//

#ifndef MENU_H
#define MENU_H
#include <string>

using namespace std;
class Menu{
    private:
        string name;
        float price;
        string categoryFood;
        string description;
        int amountInStock;
    public:
    Menu(
            const string& name
            const string& categoryFood
            const string& description
            float price
            int amountInStock
            );
    void setProductName(const string& name);
    void setCategoryFood(const string& categoryFood);
    void setDescription(const string& description);
    void setPrice(float price);
    void setAmountInStock(int amountInStock);

    Menu& get();
    const string& getName() const;
    const string& getCategoryFood() const;
    const string& getDescription() const;
    float getPrice() const;
    int getAmountInStock() const;
};

#endif //MENU_H
