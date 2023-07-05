// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
        private :
   vector<int> nextSmallerIndex(int *arr, int n)
{
    // Write your code here.
    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);
       
    for(int i = n-1; i>=0; i--){
      int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]= s.top();
            s.push(i);
                
        }
       
    
    return ans;
   }
    
    vector<int> prevSmallerIndex(int *arr, int n)
{
    // Write your code here.
    stack<int> s;
    vector<int> ans(n) ;
    s.push(-1);
    for(int i = 0; i < n; i++){
      int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]= s.top();
            s.push(i);
                
        }
       
    
    return ans;
    }
    
     int largestRectangleArea(int *heights, int n) {
       // int n = heights.size();
        int maxArea = INT_MIN ;
        
        vector<int> next(n) ;
        
        next = nextSmallerIndex(heights, n);
        
        vector<int> prev(n) ;
        
       prev = prevSmallerIndex(heights,n);
        
        for(int i = 0 ; i<n ;i++){
            int l = heights[i] ;
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1 ;
            
            int area = l*b ;
            
            maxArea = max(area, maxArea);
            
        }
        
        return maxArea ;
        
        
        
        
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
       int area = largestRectangleArea(M[0], m);
      // cout<<area<<endl;
      for(int i = 1; i<n ; i++){
          for(int j=0; j<m; j++){
              if(M[i][j]!=0)
              M[i][j] = M[i][j] + M[i-1][j] ;
              else
              M[i][j] = 0;
          }
          int newArea = largestRectangleArea(M[i], m);
          area = max(area, newArea);
      }
      return area ;
       
    }
};


// { Driver Code Starts.
int main() {
    
    int M[MAX][MAX];

    
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    
}
  // } Driver Code Ends