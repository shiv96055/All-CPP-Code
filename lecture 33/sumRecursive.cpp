#include<iostream>
using namespace std;
int main()
{
    int getSum(int arr[],int size);
    int arr[]={12,34,5,6};
    int ans = getSum(arr,4);
    cout<<"sum is -> "<<ans<<endl;
}
int getSum(int arr[],int size)
{
  
   if(size == 0)
   {
       return 0 ;
   }    
   if(size == 1)
   {
       return arr[0];
   }
   int remainingPart = getSum(arr + 1, size - 1);
      int sum = arr[0] + remainingPart ;
      return sum ;
}