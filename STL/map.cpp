#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    cout << "unordered map" << endl << endl;

    /*    IMPORTANT NOTE ON unordered_map

    ->  in unordered_map key does not contain complex data type
        like vector<int>, set<string> , pair<int, int> .
        exemple ->  unordered_map<set<string>, int>, unordered_map<vector<int> , string>

    ->  only key contain basic data type like int, string , double 

    ->  insert, find, erase thsese all are take O(1) time complexcity

    */

    unordered_map<string, int> str;

    str["abc"] = 2;
    str["bnm"] = 8;
    str["ghj"] = 3;
    unordered_map<int, vector<pair<int, int> >> ti1;
    
    // for (int i = 0; i < 9; i++){
    //     string s;
    //     cin >> s;
    //     str[s]++;          // TC -> O(1)
    // }
    
    for(auto it : str){
        cout << it.first << " " << it.second << endl;
    }
  
    // find function
    // m.find(key word) 
    // TC -> O(1)
    auto it = str.find("ghj");
    cout << endl;
    if(it == str.end()){
        cout << " value is not found " << endl;
    }else{
        cout << it->first << " " << it->second << endl;
    }

    cout << endl;
    str.erase("abc");
    for(auto it: str){
        cout << it.first << " " << it.second << endl;
    }

    /*
               MAP FUNCTION


    map<int, string> m;
    m[1] = "abc";  //m.insert({1, "abc"})   // m.insert(make_pair(1, "abc"))
    m[5] = "cdc";  // m.insert({5, "cdc"})  // m.insert(make_pair(5, "cdc"))
    m[3] = "nmh";  // m.insert({3, "nmh"})  // m.insert(make_pair(3, "nmh"))
map<int, string> :: iterator it;


    for (it = m.begin(); it != m.end(); it++){
        cout << it->first << " " <<it->second << endl;
    }

    m[9];
   // cout << m[9].first << " " m[9].second << endl;
    cout << m[9] << endl;
    cout << endl;
    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }
    cout << m.size() << endl;

    map<string, int> mpp;
    mpp.insert({"abc", 1});
    mpp.insert({"aed", 9});
    mpp.insert({"abm", 10});
    mpp["acd"] = 78;

     // T.C -> nlog(n)
    for(auto &it :mpp){
        cout << it.first << " " << it.second << endl;
    }

    map<int, bool> num;
    num[6] = true;
    num[7] = false;
    num[9];

    for(auto it : num){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    cout << num[6] << endl;      // log(n)
    cout << num[7] << endl;
    cout << num[9] << endl;
    cout << endl;

    // find element in map
    // m.find( key word)
      auto pt = num.find(7);    // log(n)
    // map<int, bool> :: iterator it

    if(pt == num.end()){
        cout << "no value find " << endl;
    }else{
        cout << pt->first << " "<< pt->second << endl;
        cout << endl;
    }


    // erase function in map
    // m.erase(key word )

    // case -1 pass by key
    num.erase(9);  // TC -> O(log(n))
    for(auto it : num)
        cout << it.first << " " << it.second << endl;
    cout << endl;

    // pass by iterator
    num.erase(pt);    // TC ->  log(n)
    for (auto it : num)
        cout << it.first << " " << it.second<<endl;


        // clear function in map
        // m.clear()
    cout << num[6] << endl;
    num.clear();
    for(auto it : num)
        cout << it.first << " " << it.second << endl;

    cout << num[6] << endl;

    map<string, int> str;

    // abc, def, abc, ghj, jkl, ghj, ghj, abc
    for (int i = 0; i < 8; i++){
        string s;
        cin >> s;
        str[s] = str[s] + 1;
        // str[s]++;
    }

    for(auto pr : str){
        cout << pr.first << " " << pr.second << endl;
    }

     */
    return 0; 
}


// vp = make_pair(2,7)