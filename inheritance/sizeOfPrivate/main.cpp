#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Parent{
public:
    int pub;
protected:
    int pro;
private:
    int prv;
};

class Child: private Parent{
private:
    int a;
};

int main(){
    cout << sizeof(Parent) << endl;
    cout << sizeof(Child) << endl;
    return 0;
}