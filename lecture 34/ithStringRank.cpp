#include<bits/stdc++.h>
using namespace std;
 
// Function to print all sub strings
vector<string> subString(char str[], int n)
{
    // Pick starting point
    vector<string> s; 
    for (int len = 0; len <n-1; len+2)
    {   
        // Pick ending point
        for (int i = len +2; i < n ; i++)
        {
            s.push_back();
        }
    }
}
 
// Driver program to test above function
int main()
{
    char str[] = "a,b,c";
    cout<<"size"<<sizeof(str)<<endl;
    subString(str, strlen(str));
    return 0;
}