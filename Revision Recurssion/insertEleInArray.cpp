#include<iostream>

using namespace std ;

int main(){
    int arr[100] = {0};
    int pos, n, x ;
    // size of array ;
    cout<<" enter the value of n -> ";
    cin>>n;

    // enter number into array
    for(int i = 0; i<n; i++){
        arr[i] = i+1;
    }
    // enter element ;
    cout<<" enter valu element -> " ;
    cin>>x ;

    // position of element 
    cout<<"enter the position -> ";
    cin>>pos ;

    // print array ;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    n++;
    
    for(int i = n-1; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos -1] = x;

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}