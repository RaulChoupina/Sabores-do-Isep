//
// Created by HP on 27/05/2024.
//
#include "InvalidDataException.h"
#include <string>
using namespace std;

InvalidDataException:: InvalidDataException(string data){
    this -> data = "Error:[" + data + "] duplicated !! ";
}

const char* InvalidationDataException :: what(){
    return this -> data.c_str();
}