#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Parent{
public:
    void f(){
        v_prvF();
        prvF();
    }
protected:
private:
    virtual void v_prvF(){
        cout << "Parent Private\n";
    }

    void prvF(){
        cout << "Parent Private\n";
    }
};

class Child: public Parent{
private:
    virtual void v_prvF(){
        cout << "Child Private\n";
    }
    void prvF(){
        cout << "Child Private\n";
    }
};

int main(){
    Parent p;
    Child c;

    p.f();
    c.f();
    return 0;
}

//cpp에서 정의하면 인라인 아닌가?