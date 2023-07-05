# include<iostream>
using namespace std ;
bool  isSorted(int arr[],int size)
{
// base case
if(size == 0||size == 1){
    return true;
}

if(arr[0]>arr[1]){
    return false;
}

else{
bool ptr = isSorted(arr + 1 , size - 1);
return ptr;
}

}

int main()
{
cout<<" hello world"<<endl;

int arr[]={2,4,5,1,8};

int size =5;
bool ans = isSorted(arr,size);
if(ans)
    cout<<" array is sorted "<<endl;
else
    cout<<" array is not sorted "<<endl;
return 0;
}