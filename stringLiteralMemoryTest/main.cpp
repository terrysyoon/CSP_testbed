#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

const char* t(){
    const char* s = "Hello";
    return s;
}

int main(){
    int i;
    for(i = 0; i < 10; i++) printf("%p\n",t());
    return 0;
}