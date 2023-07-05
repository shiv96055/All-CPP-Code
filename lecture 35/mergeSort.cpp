#include<iostream>

using namespace std ;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    cout<<"merge ka start "<<s<<" merge ka end "<<e<<" merge ka mid "<<mid<<endl;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values in arr1
    int mainIndex = s;
    for(int i=0; i<len1; i++){  
        first[i] = arr[mainIndex++] ;
    }
    // copy value in array2
    mainIndex  = mid + 1;
    for(int i = 0; i < len2 ; i++){
        second[i] = arr[mainIndex++];
    }

    // merge two sorted array

    int index1 = 0;
    int index2 = 0;
    mainIndex = s ;
    while(index1 < len1 && index2 < len2){

    if(first[index1] < second[index2]){
        arr[mainIndex++] = first[index1++];
    }
    else{
        arr[mainIndex++] = second[index2++];
    }

    }

    while(index1 < len1){
        arr[mainIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainIndex++] = second[index2++];
    }
    // cout<<"s "<<s<<endl;
    // cout<<"e "<<e<<endl;
    // cout<<"mid "<<mid<<endl;

    // for(int i = 0 ; i<e; i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    

}
void solve(int *arr, int s, int e){

    if(s >= e){
        return ;
    }
    int mid = (s+e)/2 ;
    cout<<"solve ka start "<<s<<" solve ka end " <<e<<" solve ka mid "<<mid<<endl;
    // left part sort krdo
    solve(arr, s, mid);

    // right part solve krdo

    solve(arr, mid+1, e);

    // merge krdo
   
    merge(arr, s, e);
// for(int i = 0 ; i<e; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
}
int main(){
    int arr[8]={20,10,24,5,8,9,11,15};
    int n = 8; 

    solve(arr, 0, n-1);

    
    for(int i = 0 ; i < n ;i++){
        
        cout<<arr[i]<<" ";
    }
 return 0;
}