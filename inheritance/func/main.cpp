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
        Parent::v_prvF();
        v_prvF();
        prvF();
        cout << endl;
    }

    void foo(){
        cout << "hello\n";
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
public:
    void foo(){
        cout << "Hi there\n";
    }
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

    c.::Parent::foo();
    c.::Child::foo();
    return 0;
}

//v_prvF, prvF 2가지 모두 오버라이딩된 함수인가요?
//스트링 리터럴 관련..
