#include<bits/stdc++.h>

using namespace std;


int main(){
   int t;
    
    cin>>t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
            cout << v[i]<< " ";

        cout << endl;
        int count = 1;
        int sum = v[0];
        for(int i=1; i<n; i++){
            
            if(sum <= v[i]){
                sum = sum + v[i];
                count++;
            }
        }
        
        cout<<count<<endl;
        
    }

    return 0;
}