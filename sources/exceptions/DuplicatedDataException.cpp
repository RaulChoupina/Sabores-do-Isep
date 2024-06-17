//
// Created by HP on 27/05/2024.
//
#include "DuplicateDataException.h"
#include <string>
using namespace std;

DuplicateDataException :: DuplicateDataException(string data){
    this ->data = "Error: ["+data +"] duplicated !!";
}

const char* DuplicatedDataException :: what(){
    return this -> data.c_str();
}