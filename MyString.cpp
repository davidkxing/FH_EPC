#include "MyString.h"

Mystring::print() {
    std::cout << "String: " << myString << std::endl << "Length: " << length() << std::endl;
}

Mystring::c_str(){}

Mystring::append(){}

Mystring::length(){
    return sizeof(this->myString);
}

Mystring::Mystring(const char* myString){
    this->myString = myString;
}

Mystring::~Mystring(){}
