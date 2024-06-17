#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include "MenuContainer.h"

class Order { // Corrected class name capitalization
private:
    float SellingPrice;
    MenuContainer menu;

    // Set method should be private unless intended to be accessed outside
    void setSellingPrice(const float& pSellingPrice);

public:
    Order(); // Constructor should match class name
    float getSellingPrice() const; // Mark method as const
    void add(Menu& menu);
    void updateSellingPriceClient();
    void updateSellingPriceDonoContainer();
};

#endif // ORDER_H
