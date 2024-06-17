//
// Created by HP on 27/05/2024.
//

#ifndef DATACONSISTENCYEXCEPTION_H
#define DATACONSISTENCYEXCEPTION_H
#include <exception>
#include <string>

using namespace std;

class DataConsistencyException :public exception{
private:
    string data;
public:
    DataConsistencyException(string data);
    const char* what();
};
#endif //DATACONSISTENCYEXCEPTION_H
