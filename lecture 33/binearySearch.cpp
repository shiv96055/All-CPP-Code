#include<iostream>
using namespace std;

void print(int arr[], int s, int e, int mid);
int main()
{
    int binearySearch(int arr[], int s, int e, int key);
    int arr[]={ 12, 13, 15, 16, 18};
    int key = 18;
    int index = binearySearch(arr , 0 , 4 , key);
    cout<<index<<endl;
}

int binearySearch(int arr[], int s, int e, int key)
{
    //print(arr, s, e);
    if(s>e)
    {
        return false;
    }
   
   int  mid = s + (e - s)/2;
   print(arr, s, e, mid);

    if(arr[mid] == key)
    {
        return mid ;
    }
   
    if(arr[mid]>key)
    {
       mid =  binearySearch(arr, s , mid-1 , key) ;  
       return mid ;
    }
    else{
        
          mid = binearySearch(arr,  mid+1, e, key);
          return mid;
    }
}

void print(int arr[], int s, int e, int mid)
{
    for(int i = s ; i <= e ; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<" value of mid  -> "<<arr[mid]<<endl;
}


