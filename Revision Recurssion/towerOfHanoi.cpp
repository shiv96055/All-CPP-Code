#include<iostream>
using namespace std ;

void solve(int n, int s, int d, int h){

    if(n == 1){
        cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return ;
    }

    solve(n-1, s, h, d) ;

    cout<<"moved disk "<< n<< " from "<<s<< " to "<<d<<endl;

    solve(n-1,h,d,s);
}

 int main(){

     int n = 4 ;
     int s = 1;
     int h = 2;
     int d = 3;
     solve(n,s,d,h) ;
 }
