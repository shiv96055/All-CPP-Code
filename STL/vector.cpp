#include<bits/stdc++.h>

using namespace std;

 void print(vector<int> v){

     cout << "size : " << v.size() << endl;

     for (int i = 0; i < v.size(); i++){
         cout << v[i] << " ";
     }
     cout << endl;
 }

int main(){
    vector<int> v(7, 8);

    v.push_back(100); // O(1) TC
    print(v);

    v.pop_back(); // O(1) TC
    print(v);

    vector<int> v1 = v;  // O(n) TC

    print(v1);

    v1.pop_back();
    v1.push_back(90);
    print(v1);
    print(v);
    char s1[] = "shiv";
    char s2[] = "shiv";
    cout << s1[0] << endl;
    cout << s1 <<" "<<s2 << endl;

    if(s1 == s2){
        cout << "equal" << endl;
    }else{
        cout << "unequal" << endl;
    }
    /* int n;
     cin >> n;
     for (int i = 0; i < n; i++){
         int x;
         cin >> x;
         v.push_back(x);
         print(v);
     }

     print(v); */
}