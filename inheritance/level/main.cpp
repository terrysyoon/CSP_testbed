#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class GrandParent{
public:
    int GP_Pub;
    void print() {cout << "Hello!\n";}
protected:
    int GP_Prtd;
private:
    int GP_Prv;
};

class Parent: private GrandParent{
public:
    int P_Pub;
    void println(){
        cout << "World!\n";
        GrandParent::print(); //프라이빗으로 받아도 스페시파이어 붙이면 호출 되네? 왜?
    }
    GrandParent::print(); //이건 왜 또 안됨?
//private도 오버라이딩으로 치나?
protected:
    int P_Prtd;
private:
    int P_Prv;
};

class Child: public Parent{
public:
    int C_Pub;
protected:
    int C_Prtd;
private:
    int C_Prv;
};

int main(){
    GrandParent *GP = new GrandParent;
    Parent *P = new Parent;
    Child *C = new Child;

    //cout << C->GP_Pub << endl;

    P->println();
    C->println();
    return 0;
}