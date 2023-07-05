#include<iostream>
using namespace std ;

int power(int a, int b)
{
    if(b==0){
        return 1;
    }

    if(b==1){
        return a ;
    }
// recursuve call
   int ans = power(a, b>>1);

    if((b&1)==0)
    {
        // if b is even 
       return ans = ans * ans ;
    }
    else{
        // if b is odd 
        return ans = a * ans * ans  ;
    }
    
}

int main(){
    int a, b;
    cin>>a>>b ;

    int ans = power(a, b);
     cout<<ans <<endl;
}

// int power(int a, int b){
//      int ans = 1;

// while(b>0)
// {
   
   
//     if((b&1)==0)
//     {
//          a = a * a ;
//     }
//     else{
//         ans = a * ans * ans ;
//     }
    
//     b = b>>1;
// }
// return ans ;

// }
// int main(){
//     int a , b;
//     cin>>a>>b ;
//     int ans = power(a, b);
//     cout<<ans <<endl;
// }