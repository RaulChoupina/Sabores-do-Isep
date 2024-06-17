#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include <string>
using namespace std;

class SupplierOrder;

class Supplier {
private:
    string name;
public:
    Supplier(const string& name);
    string getName() const;
    void setName(const string& pName);

    bool operator==(const Supplier& obj) const;
    bool operator==(const string& name) const;
};

#endif // SUPPLIER_H