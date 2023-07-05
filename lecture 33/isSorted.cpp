#include<iostream>
using namespace std ;
int main()
{
    bool isSorted(int arr[], int size);
    int arr[]={2,4,6,9,11,13};
    int size = 6;
    bool ans =isSorted(arr,size);
    if(ans){
        cout<<" sorted array "<<endl;
    }
    else{
        cout<<" not sorted array "<<endl;
    }
    
}

bool isSorted(int arr[], int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
    bool ans = isSorted(arr +1, size-1);
    return ans;
    }
}