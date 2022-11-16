#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

class Mystring
{
private:
    const char* myString;
public:
    print();
    length();
    c_str();
    append();
    Mystring(const char* myString);
    ~Mystring();

};

#endif