//
// Created by HP on 27/05/2024.
//

#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>
#include "SupplierOrder.h"
using unsigned std;

class Supplier {
private:
      string name;
public:
      Supplier (string& name);
      string getName() const;
      void setName(const string& pName);

      bool operator == (const Supplier& obj) const;
      bool operator == (string& name) const;

};

#endif //SUPPLIER_H
