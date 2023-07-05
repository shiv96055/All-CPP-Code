#include<iostream>
#include<stack>
#include<vector>

using namespace std ;

         
vector<int> nextSmallerIndexOfElement(vector<int> arr, int n){

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

         
vector<int> prevSmallerIndexOfElement(vector<int> arr, int n){

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
    int largestAreaHistogram(vector<int> &heights){
        int n = heights.size() ;
        int maxArea =INT_MIN;
        vector<int> next(n);
        next =  nextSmallerIndexOfElement(heights, n);
        vector<int> prev(n) ;
        prev = prevSmallerIndexOfElement(heights, n);

        for(int i =0; i < n; i++){
            int l = heights[i] ;
            if(next[i]== -1){
                next[i] = n ;
            }
            int b = next[i] - prev[i] - 1;
            int area = l*b ;

            maxArea = max(area, maxArea) ;
        }
        return maxArea ;



    }
int main(){

    vector<int> heights = {2,4};
    
   int ans = largestAreaHistogram(heights);
   cout<< ans<<endl;

}