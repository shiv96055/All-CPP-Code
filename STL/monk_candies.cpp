#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	while(num--){
		int n , k;
		cin>>n;
		cin>>k;
		multiset<long long> bags ;
		for(int i=0; i<n; i++){
			long long candy_ct ;
			cin>>candy_ct ;
			bags.insert(candy_ct);
			
		}
	}

	long long total_candies = 0;
	for(int i=0; i<k; i++){
		auto last_it = --bags.end();
		long long candy_ct = *(last_it);
		total_candies += candy_ct;
		bags.erase(last_it);
		bags.insert(candy_ct/2);
	}

	cout<<total_candies;





}