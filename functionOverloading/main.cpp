#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void ol(double a){
    cout << "double called!\n";
}

void ol(float a){
    cout << "float called!\n";
}

int main(){
    float f = 3.1;
    double d = 3.1;

    ol(f);
    ol(d);

    ol(3.141592);
    ol(3.141692f);
    return 0;
}