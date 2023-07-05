#include<iostream>
#include<vector>
using namespace std ;

void insertArray(vector<int>&v, int temp){
   // base case 
    if(v.size() == 0 || v[v.size() -1] <= temp){
        v.push_back(temp) ;
        return ;
    }
    // take value from top 
    int val = v[v.size() -1];

    v.pop_back();
    insertArray(v, temp);

    // insert the value 
    v.push_back(val);

}

void sort(vector<int> &v ){
   // cout<<"s";
    if(v.size() == 1){
        return ;
    }
    int temp = v[v.size() -1];
    v.pop_back();
    
    sort(v);

    insertArray(v, temp);
}


int main(){

   vector<int>v = {1,2,5,4,3,7,5,6,9};

    sort(v);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;

}