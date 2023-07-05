#include<iostream>
using namespace std ;

class Nstack{

    public:

    int *arr ;
    int *top ;
    int *next ;
    int freespot ;
    int n, s ;

    Nstack( int N, int S){
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n] ;
        next = new int[s];

        for(int i = 0; i < n; i++){
            top[i] = -1;
        }

        for(int i = 0; i < s ; i++){
            next[i] = i+1;
        }
        next[s-1] = -1 ;
        freespot = 0 ;

    }

    bool push(int x, int m){
        // stack overflow 
        if(freespot == -1){
            return false ;
        }
        // find index 
        int index =  freespot ;

        // update freespot 
        freespot  = next[index];

        // insert element into array 
        arr[index] = x ;

        // update next 
        next[index] = top[m-1];

        // update top 
        top[m-1] = index ;

        return true ;

    }

    int pop(int m){

        //  stack is empty 
        if(top[m-1] == -1){ 
            return -1 ;
        }

        // find index 
        int index = top[m-1] ;

        // update top 
         top[m-1] = next[index] ;

         // update next[index]
         next[index] = freespot ;

         // update freespot 
         freespot = index ;

         return arr[index] ;



    }

};

int main(){
    Nstack Stack(3, 6) ;
   cout<< Stack.push(5, 1)<<endl;
    cout<< Stack.push(10, 1)<<endl;
     cout<< Stack.push(100, 2)<<endl;
      cout<< Stack.push(1010, 3)<<endl;
       cout<< Stack.push(98, 2)<<endl;

        cout<<Stack.push(87, 3)<<endl;
        cout<<Stack.push(87, 2) <<endl;

        cout<<Stack.pop(1)<<endl;
         cout<<Stack.pop(1)<<endl;
          cout<<Stack.pop(1)<<endl;
           cout<<Stack.pop(2)<<endl;
            cout<<Stack.pop(2)<<endl;
             cout<<Stack.pop(2)<<endl;
              cout<<Stack.pop(2)<<endl;
               cout<<Stack.pop(3)<<endl;
                cout<<Stack.pop(3)<<endl;
                 cout<<Stack.pop(3)<<endl;

                  cout<<Stack.pop(1)<<endl;
                   cout<<Stack.pop(2)<<endl;
                    cout<<Stack.pop(3)<<endl;

return 0;
}