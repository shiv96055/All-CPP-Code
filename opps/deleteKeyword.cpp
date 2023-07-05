#include<iostream>
using namespace std ;
int main(){
    int a = 9;
    int *ptr = &a ;
     
     cout<<"value at ptr "<<*ptr<<endl;

     int *b = new int(67);

     cout<<"value at b "<<*b<<endl;
     delete b ;
     cout<<*b<<endl;

     int *arr = new int [5] ;

    arr[0] = {10} ;
    arr[1] = {20} ;
    arr[2] = {30} ;
    arr[3] = {30} ;
    arr[4] = {40} ;

    cout<<" arr[0] = " <<arr[0]<<endl;
    cout<<" arr[4] =" << arr[4]<<endl;
    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    delete arr[] ; 
    cout<<arr[3]<<endl;


}