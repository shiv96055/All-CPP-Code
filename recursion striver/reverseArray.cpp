#include<iostream>

using namespace std;

void fun(int *arr, int s, int e){
    if( s > e){
        return;
    }

    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    return fun(arr, s + 1, e - 1);
}

void fun3(int i, int *arr, int n){

    if(i>=n/2){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;

   return  fun3(i + 1, arr, n);
}

 void print(int arr[],  int n){
     for (int i = 0; i < n;i++){
         cout << arr[i] << " ";
     }
     cout << endl;
 }
int main(){

    int n = 4;

    int arr[4] = {1, 2, 3, 4};
    print(arr, n);
    fun(arr, 0, n - 1);
    print(arr, n);

    fun3( 0, arr, n);
    print(arr, n);
}