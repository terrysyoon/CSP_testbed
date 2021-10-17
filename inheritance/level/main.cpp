#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class GrandParent{
public:
    int GP_Pub;
    void GP_print_Pub() {cout << "GP_Pub!\n";}
protected:
    int GP_Prtd;
    void GP_print_Prtd() {cout << "GP_Prtd!\n";}
private:
    int GP_Prv;
    void GP_print_Prv() {cout << "GP_PRV!\n";};
};

class Parent: private GrandParent{
public:
    int P_Pub;
    void printP(){
        cout << "World!\n";
        GrandParent::GP_print_Pub(); //OK! Private으로 받아도 class Specifier 붙이면 호출이 되네요.. 이유가 궁금합니다.
        GrandParent::GP_print_Prtd(); //OK!
        //GrandParent::GP_print_Prv(); Error! Declaration이 private이면 안되긴 하네요.
    }

    void GP_print_pub(){ //GP_print_pub은 current scope에서 inaccessible인데, 이 function declaration도 overriding이라 할 수 있을까요?
        cout << "GP_Pub overriden?!\n";
    }

protected:
    int P_Prtd;
private:
    int P_Prv;
    int GP_Prv; //ok. GP_Prv is not accesible on this scope
};

class Child: public Parent{
public:
    int C_Pub;
    void printC(){
        cout << "HiHi\n";
        //GrandParent::GP_print_Pub(); Error! Child inherits Parent with public specifier, so guess this must work, but why not?
        //Parent::GP_print_Pub(); Error! Why is this an error? line 24 works..
        //현재 상황(Access Control 등..)에서 Child에서 GP_print_pub();을 call 할 수 있는 방법은 없는 것인가요?
    }
protected:
    int C_Prtd;
private:
    int C_Prv;
};

int main(){
    GrandParent *GP = new GrandParent;
    Parent *P = new Parent;
    Child *C = new Child;

    P->GrandParent::GP_print_Pub(); //why this is impossible when line 24 is okay?

    return 0;
}