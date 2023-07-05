#include<iostream>
#include<vector>
#include<stack>

using namespace std ;
void print(vector<int> &ans , int n){
    
    for(int i = 0; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}

vector<int> nextSmallerElement(int *arr, int n){

    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);

    for(int i = n-1 ; i >=0 ; i--){
        int curr = arr[i] ;
        
            while(curr<s.top()){
                s.pop();
            }
              ans[i] = s.top();
            s.push(curr) ;
        }

        return ans ; 
    }

    
vector<int> prevSmallerElement(int *arr, int n){

    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);

    for(int i = 0 ; i <n ; i++){
        int curr = arr[i] ;
        
            while(curr<s.top()){
                s.pop();
            }
              ans[i] = s.top();
            s.push(curr) ;
        }

        return ans ; 
    }

       
vector<int> prevSmallerIndexOfElement(int *arr, int n){

    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);

    for(int i = 0 ; i < n ; i++){
        int curr = arr[i] ;
        
            while(s.top()!= -1 && arr[s.top()]>=curr){
                s.pop();
            }
              ans[i] = s.top();
            s.push(i) ;
        }

        return ans ; 
    }
          
vector<int> nextSmallerIndexOfElement(int *arr, int n){

    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);

    for(int i = n-1 ; i>=0 ; i--){
        int curr = arr[i] ;
        
            while(s.top()!= -1 && arr[s.top()]>=curr){
                s.pop();
            }
              ans[i] = s.top();
            s.push(i) ;
        }

        return ans ; 
    }



int main (){
    int n = 6 ;
    int arr[n] = {2, 1, 5, 6, 2, 3} ;
    vector<int> next(n);
    vector<int> prev(n) ;
    vector<int> prevIndex(n) ;
    vector<int> nextIndex(n) ;
    next = nextSmallerElement(arr, n);
    cout<<"next smaller element -> ";
    print(next,n);
    
    prev =  prevSmallerElement(arr, n);
    cout<<"prev smaller element -> ";
    print(prev,n);
    prevIndex = prevSmallerIndexOfElement(arr,n);
    cout<<"prev smaller element index -> ";
    print(prevIndex, n) ;

     nextIndex = nextSmallerIndexOfElement(arr,n);
    cout<<"next smaller element index -> ";
    print(nextIndex, n) ;
}