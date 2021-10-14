


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	int n;
	cin >> n;
	vector<int> before,after;
	while(n --) {
		int x , y;
		cin >> x >> y;
		before.push_back(x);
		after.push_back(y);
	}

	for(int i = 0; i < before.size(); i ++) {

		if(before[i] != after[i]) {
			cout << "rated" << endl;
			return 0;
		}

	}

	sort(after.begin(), after.end(), greater<int>());
	for(int i = 0; i < before.size(); i ++) {

		if(before[i] < after[i]) {
			cout << "unrated" << endl;
			return 0;
		}
	}
	cout << "maybe" << endl;

return 0;
 
}