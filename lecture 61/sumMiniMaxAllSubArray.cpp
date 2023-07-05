#include<iostream>
#include<limits.h>
#include<queue>
using namespace std ;


int solve(int *arr, int n, int k){
    deque<int> maxi;
    deque <int> mini;
    int ans = 0;

    // find maxi first k window size
    for(int i =0; i<k; i++){
        while(!maxi.empty() && arr[i]>arr[maxi.front()]){
            maxi.pop_front();
        }
          while(!mini.empty() && arr[i]<arr[mini.front()]){
            mini.pop_front();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

   ans = ans + arr[mini.front()] + arr[maxi.front()];
    for(int i = k; i<n; i++){
        
         // removal of element ;
        if(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();
        }

         if(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
        }

    // add krdo elemnt ko
     while(!maxi.empty() && arr[i]>arr[maxi.front()]){
            maxi.pop_front();
        }
          while(!mini.empty() && arr[i]<arr[mini.front()]){
            mini.pop_front();
        }
        maxi.push_back(i);
        mini.push_back(i);
        ans = ans + arr[mini.front()] + arr[maxi.front()];

    }
   // ans = ans + arr[mini.front()] + arr[maxi.front()];
    return ans ;
}
// approach 2. -> T.C -> O(n)
int main(){
    int arr[] = {2,5,-1,7,-3,-1,-2};

    cout<<solve(arr,7,4);
}












/*
// approach 1 T.C -> O(n*n)
int main(){
    int arr [] = {2,5,-1,7,-3,-1,-2};
    int k = 4;
    int min = INT_MAX ;
    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<k;i++){
        for(int j=i; j<k+i;j++){
            cout<<arr[j]<<" ";
            if(arr[j]<min){
                min = arr[j];
            }
            if(arr[j]>max){
                max=arr[j];
            }
            
        }cout<<endl;
        cout<<"min = "<<min<<endl;
            cout<<"max = "<<max<<endl;
        sum = sum + min +max ;
    int min = INT_MAX ;
    int max = INT_MIN;
    cout<<endl;
    }
    cout<<sum<<endl;
}*/