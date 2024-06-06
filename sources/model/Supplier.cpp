//
// Created by HP on 27/05/2024.
//
#include "Supplier.h

Supplier:: Supplier (string& name,bool isActive){
    setName(name);
    if(isActive){
        setActive();
    }else{
        setInactive();
    }
}

string Supplier:: getName() const{
    return name;
}

string Supplier:: getState() const{
    if(this ->isActive)
        return "Available";
    return "Unavailable";
}

void Supplier:: toggleState(){
    if (this-> isActive){
        this->isActive = false;
    }else{
        this -> isActive =true;
    }
}
void Supplier:: setActive(){
    this ->isActive = true;
}
void Supplier:: setInactive(){
    this->isActive =false;
}
void Supplier:: setName( const string &pName){
    this-> name =pName
}

bool Supplier:: operator== (const Supplier &obj) const{
    if(this ->getName()== obj.getName()){
        return true;
    }return false;
}

bool Supllier:: operator == (string &name) const{
    if (this->name == name){
        return true;
    }return false;
}