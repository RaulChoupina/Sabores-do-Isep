//
// Created by HP on 27/05/2024.
//

#ifndef DUPLICATEDDATAEXCEPTION_H
#define DUPLICATEDDATAEXCEPTION_H
#include <exception>
#include <string>

using namespace std;

class DuplicatedDataException :public exception{
private:
    string data;
public:
    DuplicatedDataException(string data);
    const char* what();
};
#endif //DUPLICATEDDATAEXCEPTION_H
