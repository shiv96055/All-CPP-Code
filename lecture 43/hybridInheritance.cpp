#include<iostream>
using namespace std ;

class A {
    public:
    void fun1(){
        cout<<"Inside fun1 A "<<endl;
    }
};
class D {
    public :
    void fun4(){
        cout<<"Inside fun4 D"<<endl;
    }
};

class B :public A {
    public :
    void fun2(){
        cout<<"Inside fun2 B"<<endl;
    }
};
class C : public A,public D {
    public :
    void fun3(){
    cout<<"Inside fun3 C"<<endl;
    }
};

int main(){

    A obj1;
    obj1.fun1();

    D obj2 ;
    obj2.fun4();

    B obj3 ;
    obj3.fun1();
    obj3.fun2();

    C obj4 ;
    obj4.fun3();
    obj4.fun1();
    obj4.fun4();


    return 0;

}