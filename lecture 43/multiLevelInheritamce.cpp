#include<iostream>
using namespace std ;

class animal {
    public :
    int age ;
    int weight ;

    public :
    void speek (){
        cout<<"speeking"<<endl;
    }
};

class dog : public animal{

};

class cow : public dog {

};

int main(){

// multilevel inheritance 
   cow obj ;
   cout<<obj.age<<endl;
   obj.speek();
   cout<<obj.weight<<endl;
   
   cout<<endl;
   
    dog d ;
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.speek() ;

}