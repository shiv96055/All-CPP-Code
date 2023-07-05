#include<iostream>
#include<vector>
#include<stack>
#include <bits/stdc++.h>

using namespace std ;
vector<int> ngr(int *arr, int n){
    cout<<"sunny"<<endl;
    vector<int> ans(n) ;
    stack<int> s ;
    cout<<" a "<<endl;
    for(int i = n-1; i>=0; i--){
         cout<<"b"<<endl;
        int curr = arr[i] ;

        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(curr < s.top() && s.size()>0){
            ans.push_back(s.top());
        }
        else if(curr >s.top()){
            while(curr>s.top() && s.size()>0){
                s.pop() ;
            }
            if(s.size() == 0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }

            
        }
        s.push(curr);
    }
    reverse(ans.begin(), ans.end());
    cout<<" love sunny"<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return ans ;
}

int main(){
    int arr [] = {2, 4, 5, 7, 8, 6};
    vector<int> an(6) ;
    cout<<"shiv1"<<endl;
    an = ngr(arr, 6);
    cout<<"shiv2"<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<an[i]<<" ";
    }
    return 0 ;
}