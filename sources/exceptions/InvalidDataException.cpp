//
// Created by HP on 27/05/2024.
//
#include "../header/InvalidDataException.h"

InvalidDataException:: InvalidDataException(string data){
    this -> data = "Error:[" + data + "] duplicated !! ";
}

const char* InvalidationDataException :: what(){
    return this -> data.c_str();
}