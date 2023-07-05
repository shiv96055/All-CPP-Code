#include<bits/stdc++.h>

using namespace std;

int main(){

        int arr[8] = {1, 5, 8, 7, 4, 11, 10};

        // pos = 4
        // val = 7

        // 1 5 8 20 7 4 11 10

        // insertion
        int val = 20;
        for(int i=3; i<8; i++){
            int temp = arr[i];
            arr[i] = val;
            val = temp;
          //  cout<<arr[i]<<" ";
        }
        
        // printing element
        for(int i=0; i<8; i++)
                cout<<arr[i]<<" ";

            // deletion
        for(int i=2; i<7; i++){
            arr[i] = arr[i + 1];
        }
        arr[7] = 0;
        cout<<endl;

            // printing
            val = 11;
        bool flag = false;
        for(int i=0; i<8; i++)
        {
            if(arr[i] == val){
                cout<<"yes"<<endl;
                cout<<i<<endl;
                cout<<val<<endl;
                flag = true;
            }
        }
        
        if(flag == false)
        cout<<"no"<<endl;
    return 0;
}