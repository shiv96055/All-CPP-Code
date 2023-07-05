#include<iostream>
using namespace std ;

class animal{
    public :
    void speak(){
        cout<<" speaking"<<endl;
    }
};

class dog : public animal {
    public :
    // void speak(){
    //     cout<<"barking "<<endl;
    // }
    void print(){
        cout<<"shiv kumar "<<endl;
    }
};

int main(){
    dog obj ;
    obj.speak();
    obj.print();

    string str1 = "sh";
    string str2 = "iv";

    string str3 = str1 + str2 ;
    cout<<str3<<endl;
}