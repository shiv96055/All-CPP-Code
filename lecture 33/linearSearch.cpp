#include<iostream>
using namespace std;

void print(int arr[], int size);
int main()
{
    bool linearSearch(int arr[], int size, int key);
    
    int arr[]={3, 5, 1, 2, 6} ;
    int key = 1 ;
    int size = 5 ;
    bool ans = linearSearch(arr, size, key);
    if(ans)
    {
        cout<<" found "<<endl;

    }
    else
    cout<<" not found"<<endl;

}

bool linearSearch(int arr[], int size, int key)
{
    print(arr,size);
     if(size==0)
     {
         return false;
     }
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
      bool remainingPart = linearSearch(arr + 1, size - 1, key);
      return remainingPart;
    }

} 
void print (int arr[], int size)
{
    cout<<"size of array -> "<<size<<endl;
for(int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;
}