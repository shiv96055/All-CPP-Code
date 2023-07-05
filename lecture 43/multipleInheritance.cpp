#include<iostream>
using namespace std ;

class Animal {
    public :
    int age ;
    int weight ;

    public :
    void bark (){
        cout<<"barking "<<endl;
    }
};

class Human {
    public :
    string color ;
    public :
    void speak(){
        cout<<"speaking "<<endl;
    }
};
// multiple inheritance 
class Hybrid :public Animal, public Human{

};

int main(){

// multiple inheritance 
    Hybrid obj ;
    obj.speak();
    obj.bark();
    cout<<obj.age<<endl;
    cout<<obj.color<<endl;
    cout<<obj.weight<<endl;

    return 0;

}