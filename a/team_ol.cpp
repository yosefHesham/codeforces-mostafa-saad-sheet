#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {

	int n;
	vector<int> one,two,three;
	cin >> n;
	int cnt = 1;
	while(n --) {
		int num;
		cin >> num;
		if(num == 1) {
			one.push_back(cnt);
		}
		else if(num == 2) {
			two.push_back(cnt);
		}
		else {
			three.push_back(cnt);
		}
		cnt ++ ;
	}

	int numOfTeams =  min(one.size(), min(two.size(), three.size()));

	cout << numOfTeams << endl;

	for(int i = 0; i < numOfTeams; i ++) {
		cout << one[i] << " " << two[i] << " " << three[i] << endl;
	}
	return 0;

	
	
}


