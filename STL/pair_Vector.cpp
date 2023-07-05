#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main(){
    pair<int, string> p;
    // initlize the pair

   p = make_pair(8, "shiv");
    p = {90, "shiv kumar"};

    // accese the element of pair
    cout << p.first << " " << p.second << endl;

    // use pass by reference in pair also  
    pair<int, string>& p1 = p;
    cout << p1.first << " " << p1.second << endl;
    p1.first = 3;
    cout << p1.first << endl;
    cout << p.first << endl;

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair<int, int> p_array[3];
    p_array[0] = {1, 4};
    p_array[1] = {2, 5};
    p_array[2] = {3, 6};

    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3;i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    pair<int, int> shiv;
    cin >> shiv.first;
    cin >> shiv.second;

    cout << "shiv.first -> " << shiv.first << endl;
    cout << "shiv.second -> " << shiv.second << endl;
}