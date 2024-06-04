//
// Created by HP on 27/05/2024.
//
#include "../header/DuplicateDataException.h"

DuplicateDataException :: DuplicateDataException(string data){
    this ->data = "Error: ["+data +"] duplicated !!";
}

const char* DuplicatedDataException :: what (){
    return this -> data.c_str();
}