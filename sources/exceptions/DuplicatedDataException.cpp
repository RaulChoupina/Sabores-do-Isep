//
// Created by HP on 27/05/2024.
//
#include "../header/DuplicateEntryException.h"

DuplicateEntryException :: DuplicateEntryException(string data){
    this ->data = "Error: ["+data +"] duplicated !!";
}

const char* DuplicatedEntryException :: what (){
    return this -> data.c_str();
}