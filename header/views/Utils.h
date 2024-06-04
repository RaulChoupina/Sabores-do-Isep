//
// Created by HP on 27/05/2024.
//

#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "InvalidDataException.h"

using namespace std;

      class Utils {
      public:
      static float getFloat (const string& label);
      static bool getBool (const string& label);
      static string getString (const string& label);
      static int getNumber (const string& label);
      bool validatePassword (const string& password);
      bool validateEmail (const string& email);
}
#endif //UTILS_H
