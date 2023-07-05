#include<iostream>
using namespace std ;
class node {
    public:
    int h ;
    char ch ;
    float f ;

};


int main(){
    // dyanmically allocation of memmory 
    int *p = new int() ;
    cout<<"enter number in dynamically allocated memory "<<endl;
    cin>>*p;
    cout<<"print nummber "<<*p<<endl;
    delete p ;
    int *q = new int(47);
    cout<<"print nummber "<<*q<<endl;
    // dynamic allocation of array ;
    int *arr = new int[5] ;

    for(int i = 0; i<5; i++){
       arr[i] = i + 1 ;
    }

    for(int i = 0; i<5 ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    delete q ;
    cout<<" deleted q"<<endl ;
    delete[] arr ;
    cout<<"deleted arr "<<endl;

    node *obj = new node ;
    cin>>obj->f>>obj->ch>>obj->h;
    cout<<"float value "<<obj->f<<endl;
    cout<<"char value "<<obj->ch<<endl;
    cout<<"h value "<<obj->h<<endl;
    delete[] obj ;
    cout<<"deleted obj "<<endl;
    cout<<obj->ch<<endl;
    
    
}