#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {23, 78, 2, 23, 87};

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    vector<int>::iterator it = v.begin();

    cout << *(it) << endl;

    cout << *(it + 1) << endl;

    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;


    vector<int>::iterator it1 = v2.begin();
     for (it1 = v2.begin(); it1 != v2.end(); it1= it1 +1)
        cout << *it1 << " ";
     cout << endl;


     cout << "v2 vector print" << endl;
     for(auto it : v2){
         cout << it << " ";
     }
     cout << endl;


     it = v2.begin();
      for ( ; it != v2.end(); it = it +1)
        cout << *it << " ";

      cout << endl;
      vector<pair<int, int> > v_p = {{10, 1}, {12, 21}, {34, 43}, {98, 89}};
     // vector < pair<int, int> > ::iterator sh;
     
     // auto sh : v_p
      for (auto sh = v_p.begin(); sh != v_p.end(); ++sh){
          cout << (*sh).first << " " << (*sh).second << endl;
      }

      cout << endl;
      //auto sh : v_p
      for (auto sh = v_p.begin(); sh != v_p.end(); sh++){
          cout << (sh->first) << " " << (sh -> second) << endl;
      }

      cout << "auto print" << endl;
     
      for(auto sh : v_p){
          cout << sh.first << " " << sh.second << endl;
      }
      // range base loop
      // in range base value is copy from actual data se
      for (int &value : v)
      {
          value++;
   }
    for(int value : v){
        //value++;
        cout << value <<" ";
    }
    cout << endl;
    for(auto value : v_p){

        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    // auto key word
    // auto detect data type 
    auto a = 1;
    cout << a << endl;
    vector<pair<int , int> > vp = {{23, 45}, {78, 90}, {90, 67}};
   
    for(auto value : vp){
        cout << value.first << " "<< value.second << endl;
        }

    return 0;
}