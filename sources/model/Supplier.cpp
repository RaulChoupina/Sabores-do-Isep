//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "Supplier.h"

Supplier:: Supplier (string& Email,bool isActive){
    setEmail(email);
    if(isActive){
        setActive();
    }else{
        setInactive();
    }
}

string Supplier:: getEmail() const{
    return Email;
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
void Supplier:: setEmail( const string &pEmail){
    this-> Email =pEmail
}

bool Supplier:: operator== (const Supplier &obj) const{
    if(this ->getEmail()== obj.getEmail()){
        return true;
    }return false;
}

bool Supllier:: operator == (string &Email) const{
    if (this->email == email){
        return true;
    }return false;
}