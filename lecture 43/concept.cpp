#include<iostream>

using namespace std ;
// encapsulation 
class student{
    private :
    string name ;
    int height ;
    int age ;
    int rollno  ;
    public :
   int  getage(){
       return this -> age ;
   }


};

int main(){
    student first ;
    cout<<first.getage()<<endl;
    cout<<"sb shi chal rha hai. "<<endl;
    
}