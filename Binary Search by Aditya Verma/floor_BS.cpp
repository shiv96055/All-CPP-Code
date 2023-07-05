#include<bits/stdc++.h>

using namespace std;

int findFloor(vector<int> &arr, int n, int x){

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == x){
            return arr[mid];
        }

        if(arr[mid] < x){
            ans = arr[mid];
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main(){

    vector<int> v = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int ans = findFloor(v, v.size(), 9);
    cout << ans << endl;
    return 0;
}