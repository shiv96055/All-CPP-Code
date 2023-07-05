/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n], b[n];
    
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    vector<bool> vis(n);
    for (int i = 0; i < n; i++)
    {
        vis[i] = false;
    }
    int val = INT_MAX, num = 0, res = 0, i, j;
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(vis[j] == false)
            {
                int temp = a[i]^b[j];
                if(temp < val)
                {
                    val = temp;
                    num = j;
                }
            }
        }
        res += val;
        vis[num] = true;
        val = INT_MAX;
    }
    cout<<res<<endl;
    return 0;
}