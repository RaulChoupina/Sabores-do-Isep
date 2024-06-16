//
// Created by HP on 27/05/2024.
//
#include <iostream>
#include "Utils.h"
#include <limits>
#include <regex>

using namespace std;

int Utils::getNumber(const string&  label){
    int number;
    bool flag;
    do{
        cout<<label<<": ";
        flag = false;
        cin >> number;
        if(cin.fail()){
            cout << "Not a number, please enter a number" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            flag = true;
        }
    }while(flag);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return number;
}
string Utils::getString(const string&  label){
    string input;
    cout<<label<<": ";
    getline (cin, input);
    return input;
}
float Utils::getFloat(const string &label) {
    float number;
    bool flag;
    do{
        cout<<label<<": ";
        flag = false;
        cin >> number;
        if(cin.fail()){
            cout << "Not a number, please enter a number" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            flag = true;
        }
    }while(flag);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return number;
}
bool Utils::getBool(const string& label) {
    string s;
    int n;
    do {
        s = getString(label);
        try {
            n = stoi(s);
        } catch (const invalid_argument&) {
            n = -1;
        }
    } while (n < 0 || n > 1);
    return static_cast<bool>(n);
}
bool Utils::validatePassword(const string& password) {
    const regex pattern("^(?=.*[0-9])(?=.*[!@#$%^&*])[A-Za-z0-9!@#$%^&*]{8,}$");
    return regex_match(password, pattern);
}

bool Utils::validateEmail(const string& email) {
    const regex pattern(R"((\w+)(\.?[\w-]+)*@([\w-]+\.)+[\w-]{2,})");
    return regex_match(email, pattern);
}