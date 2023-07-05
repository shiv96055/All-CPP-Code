#include<iostream>
#include<queue>
using namespace std ;
vector<int> firstNegativeNumber(int* arr, int k, int n){
    vector<int> ans;
    deque<int> q;

    // push first window size elemnt in deque
    for(int i = 0; i<k; i++){
        if(arr[i]<0){
        q.push_front(i);
        }
    } 
    // first ka answer daldo

    if(q.size()>0){
        ans.push_back(arr[q.front()]);
    }else{
        ans.push_back(0);
    }

    // remaining part k liye
    for(int i =k; i<n; i++){

        // removal of element 
        if(!q.empty() && i-q.front()>=k){
            q.pop_front();
        }

        // addition of element 
        if(arr[i]<0){
            q.push_back(i);
        }

    if(q.size()>0){
        ans.push_back(arr[q.front()]);
    }else{
        ans.push_back(0);
    }
    }

    return ans ;

}
int main(){
   
    int arr[] = {12,-3,-6,1,3,-8,-9, 8};

    vector<int> ans ;
   ans= firstNegativeNumber(arr,3,8);

   for(int i = 0; i<ans.size(); i++){
       cout<<ans[i]<<" ";
   }
}