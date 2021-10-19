/*
Oct 19th 2021
Yoon Sungbae / yoonsb@hanyang.ac.kr
*/

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

//v_prvF, prvF 2가지 모두 오버라이딩된 함수인가요?
