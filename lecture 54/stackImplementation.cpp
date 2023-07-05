#include <iostream>
using namespace std ;
class stack{
    // propertes -> data member 
    
    int *arr ;
    int top ;
    int size ;

    // behaviour -> function 
    public :
    stack(int s){
        this -> size = s ;
         top = -1 ;
        arr = new int[s] ;
    }
    void push(int element){
        if( size - top > 1){  // size - top > 1
            top++;
            arr[top] = element ;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top-- ;
        }
        else{
            cout<<"stack under flow "<<endl;
        }
    }
    bool empty(){
        if(top == -1)
          return true ;
          else
          return false ;
        
    }

    int peak(){
        if(top >= 0){
            return arr[top] ;
        }
      else{
          cout<<"stack is empty "<<endl;
         return -1 ;
      }
        
    }
    
};


int main(){
    stack ptr(5) ;
    ptr.push(34);
    ptr.push(23);
    ptr.push(27);
    ptr.push(12);
     ptr.push(11);
      ptr.push(17);
    cout<<ptr.peak()<<endl;
    cout<<ptr.empty()<<endl; ;
    ptr.pop() ;
   cout<< ptr.empty()<<endl;
   cout<<ptr.peak()<<endl;
   
   

}
