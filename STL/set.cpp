#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    cout << "set start " << endl<<endl;

    /*   Important note on set
    -> set contain both complex or basic data type 
    -> they contain only unquie element in sorted ordered
    -> insert, erase, find, these all are take O(log(n)) time complexity
    
    
    */
  
    set<string> s;
    s.insert("abc");  // log(n)
    s.insert("def");
    s.insert("bcd");
    s.insert("abc"); // set store unique element  not duplicate

    auto it = s.find("abc");
    if(it == s.end()){
        cout << " no value is find" << endl;
    }else{
        cout << (*it) << endl;
    }
    cout << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for(auto it : s){
        cout << it << " ";
    }
    cout << endl;

    it = s.find("bcd"); // log(n)
    if(it != s.end())
        s.erase(it);  // log(n) or s.erase("abc")

    s.erase("def");
    for (auto it : s)
    {
        cout << it << " ";
        }

        cout << endl;

        //            unordered set

        /*            IMPORTANT NOTE on unordered set

      ->  in case of unordered set  does not contain complex data type
         like vector<int>, pair<int, int>, vector<map<int, int> >

      ->  they contain only simple data type like int, string, long long e.t.c

      -> insert, erase, find, these all are take O(1) time complexcity
      -> they contain only unquie element 
      -> unordered set contain unquie element not in sorted ordered 

        */
        cout << endl;
        cout << "unordered set start " << endl;
        cout << endl;
        unordered_set<string> os;
        os.insert("abc");
        os.insert("def");
        os.insert("gef");
        os.insert("abc");
        os.insert("def");
        for(auto it : os){
            cout << it << " ";
        }
        cout << endl;

        auto it2 = os.find("abc");
        if(it2 != os.end())
            os.erase(it2);

            for(auto it: os)
                cout << it << " ";

            cout << endl;

            os.erase("def");
            for(auto it : os)
                cout << it << endl;

            cout <<endl<< "Multi Set Start" << endl<<endl;

            /*  Important Note on multiset 
            -> multiset contain both complex or basic data type
            -> duplicate are allow in sorted ordered
            -> insert, find erase these all are take log(n) time complexcity
            -> find operation give first value of iterator if duplicate
            is present 
            -> erase operation 
               1) if pass iterator delete only  iterator which they pass
               2) if pass value delete all elemet of that value
            
            
            */

            multiset<string> str;
            multiset<map<string, vector<int>>> str1;
            str.insert("abc");
            str.insert("def");
            str.insert("gef");
            str.insert("abc");
            str.insert("def");

            for (auto it : str)
                cout << it << " ";

            cout << endl;

            // auto pt = str.find("abc");
            // if(pt != str.end())
            //     str.erase(pt);

            //  for(auto it : str)
            //     cout << it << " ";

            // cout << endl;

            str.erase("abc");
            for (auto it : str)
            {
                cout << it << " ";
        }
        cout << endl;
        return 0;
}