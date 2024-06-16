//
// Created by HP on 27/05/2024.
//

#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include "MenuContainer"

class order {
private:
       float SellingPrice;
       MenuContainer menu;
       void setSellingPrice (const float& pSellingPrice);

public:
       Order();
       float getSellingPrice();
       void add (Menu& menu);
       void updateSellingPriceClient();
       void updateSellingPriceDonoContainer();

};

#endif //ORDER_H
