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

int main(){

    dog d ;
    cout<<d.age<<endl;
    cout<<d.weight<<endl;
    d.speek() ;

}