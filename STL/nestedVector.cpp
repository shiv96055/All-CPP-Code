#include<iostream>
#include<vector>

using namespace std;

void print(vector<pair<int, int>> p){

    for (int i = 0; i < p.size(); i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
}

int main(){
    vector<vector<int>> ans;
    vector<pair<int, int>> ans1;
    pair<int, int> p;

    for (int i = 0; i < 3; i++){
        cout << "enter first number " << endl;
        cin >> p.first;
        cout << "enter scond number " << endl;
        cin>> p.second;
        ans1.push_back(p);
    }
    print(ans1);
    vector<pair<int, int>> ans2[4];
    ans2 = ({12, 10}, {30, 20}, {11, 19}, {13, 17});

    print(ans2);
}