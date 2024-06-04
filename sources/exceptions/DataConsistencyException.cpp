//
// Created by HP on 27/05/2024.
//
#include "../header/DataConsistencyException.h"

DataConsistencyException::DataConsistencyException(string data){
    this->data = "Error: [" + data + "] duplicated!!";
}
const char* DataConsistencyException :: what(){
    return this -> data.c_str();
}
