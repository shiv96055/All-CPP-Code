// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
   bool knows(vector<vector<int> >& M, int a, int b){
       if(M[a][b] == 1){
           return true ;
       }
       return false ;
       
       
        
    }
    
   int  potentialCelebrity(vector<vector<int> >& M, int potCeleb, int n){
        int zeroCount  = 0 ;
        for(int i = 0; i<n ; i++){
            if(M[potCeleb][i] ==0){
                zeroCount++;
            }
        }
        if(zeroCount != n){
            return -1 ;
        }
        
        int  oneCount = 0 ;
        for(int i = 0; i<n; i++){
            if(M[i][potCeleb] ==1){
                oneCount++ ;
            }
        }
        if(oneCount != n-1)
        return -1 ;
       
       return potCeleb ;
       
   }
    
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s ;
        for(int i = 0; i < n ; i++){
            s.push(i) ;
        }
        
        while(s.size()!=1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b) ;
            }
            else {
                s.push(a) ;
            }
        }
       
       
        int ans = potentialCelebrity(M, s.top(), n);
        return ans ;
        
    }
};


int main()
{
    
    
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    
}
  // brute force apporach 
/*for(int i = 0; i<n; i++){
            
            
            //for row
            bool row = true;
            for(int j = 0 ; j<n ; j++){
                if(M[i][j] != 0){
                    row = false ;
                   break;
                }
                
            }
            
            
                // for col
                 bool col = true ;
                for(int j = 0; j<n; j++){
                    
                    if(M[j][i] != 1 ){
                        
                        if(i!=j){
                        col = false ;
                       break;
                        }
                        
                    }
                }
                
                
                if(row == true && col == true){
                    return i ;
                }
                
            }
            return -1 ;*/
        
// { Driver Code Starts.