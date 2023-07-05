#include<iostream>
 using namespace std ;


void Sorting(int arr[], int n)
{
if(n==0){
    return  ;
}
if(n==1){
    return  ;
}

for(int k=0; k<n-1; k++)
{
    if(arr[k]>arr[k+1])
    {
        swap(arr[k],arr[k+1]);       
    }
}

 Sorting(arr, n-1);

}

int main(){
    
    int arr[] = {25, 12,34,20,23,29,11};
    int n = 7;
      Sorting(arr , 7);

       for(int i = 0; i<7 ; i++)
       {
           cout<<arr[i]<<" ";
       }
   return 0;
}




















// void print (vector<int> arr, int j){
//     for(int i=0; i<j; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;

// }

//  void bobbleSort(vector <int> arr, int i, int j){
//      while(i < j)
//      {
//        bool swapped = false ;
//       // print(arr, j);
//       for(int x : arr){
//          cout<<x<<" ";
//      }cout<<endl;
//        for(int k = 0 ; k <j-1 ; k++){
           
//        if(arr[k]>arr[k+1]){

//        swap(arr[k], arr[k+1]);
//         swapped = true ;
//        }
       
//        }
//        if(swapped==false){
//           break;
//       }
//         i++;
//      }
//      for(int x : arr){
//          cout<<x<<" ";
//      }
//  }
//  int main()
//  {
//      vector<int> arr{ 12, 15, 67, 26, 28, 30};
//      bobbleSort(arr, 1, 6);
//      cout<<endl;
//      cout<<"shiv"<<endl;
//      for(int i=0 ; i< 6 ; i++)
//      {
//          cout<<arr[i]<<" ";
//      }
//     cout<<endl;
//     for(int x : arr)
//    {
//       cout<<x<<" ";
//     }
// } 
 