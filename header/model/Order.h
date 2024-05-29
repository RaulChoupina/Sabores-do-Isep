//
// Created by HP on 27/05/2024.
//

#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <list>
#include "MenuContainer"

class order {
private:
       float value;
       MenuContainer menu;
       void setValue (const float& pValue);

public:
       Order();
       float getValue();
       void add (Menu& menu);
       void updateValueClient();
       void updateValueDonoContainer();

}

#endif //ORDER_H
