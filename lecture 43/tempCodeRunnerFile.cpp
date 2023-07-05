#include<iostream>
using namespace std ;

class animal{
    public :
    void speak(){
        cout<<" speaking"<<endl;
    }
};

class dog : public animal {