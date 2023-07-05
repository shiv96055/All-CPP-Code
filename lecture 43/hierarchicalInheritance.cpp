#include<iostream>
using namespace std ;

class A {
    public:
    void fun1(){
        cout<<"Inside fun1 "<<endl;
    }
};

class B :public A {
    public :
    void fun2(){
        cout<<"Inside fun2 "<<endl;
    }
};
class C : public A {
    public :
    void fun3(){
    cout<<"Inside fun3"<<endl;
    }
};
int main ()
{
     A object1;
    object1.fun1();

     B object2 ;
     object2.fun2();
     object2.fun1();

    C object3 ;
    object3.fun3();
    object3.fun1();
    
    return 0;
} 
