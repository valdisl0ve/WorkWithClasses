#ifndef UNTITLED_PHONE_H
#define UNTITLED_PHONE_H

#include <string>

using namespace std;

enum TypePhone {
    Mobile, Work, Home
};

struct Phone {
    string number;
    TypePhone type;
};

#endif //UNTITLED_PHONE_H
