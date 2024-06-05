//
// Created by HP on 27/05/2024.
//
#include "SupplierView.h"
#include "Utils.h"
#include <iomanip>

#define SUPPLIERCONTAINERPACING 10

void SupplierView::printSuppliers(container<Supplier>& supplier){
      int P = SUPPLIERCONTAINERPACING;

      cout << "\nSuppliers Container:" << endl;
      cout << setw(P)<< "Name";
      cout << setw(P)<< "State";
      cout << endl;
      for (auto it=suppliers.begin(); it != suppliers.end(); ++it){
          printSupplier(&*it);
      }
}
void SupplierView:: printSupplier(Supplier*supplier){
     int P = SUPPLIERCONTAINERPACING;
     cout << setw(P) << supplier-> getName();
     cout << setw(P) << supplier-> getState() << endl;
     }
string SupplierView:: getSupplierName(){
     return Utils:: getString ("insert supplier name");
     }
void SupplierView:: invalidSupplier(){
     cout << "invalid supplier";
     }
void SupplierView:: orderPlaced(){
     cout << "order placed";
     }


