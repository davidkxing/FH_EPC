#include "MyString.h"

int main(){
    const char* hello = "Helffflo";
    const char* world = "World";
    Mystring myString1(hello);
    myString1.print();
    Mystring myString2(world);
    myString2.print();
    return 0;
}