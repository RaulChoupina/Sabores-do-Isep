//
// Created by HP on 27/05/2024.
//

#ifndef INVALIDDATAEXCEPTION_H
#define INVALIDDATAEXCEPTION_H
#include <exception>
#include <string>

using namespace std;

class InvalidDataException :public exception{
private:
    string data;
public:
    InvalidDataException(string data);
    const char* what();
};
#endif //INVALIDDATAEXCEPTION_H
