


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	
	int t ;
	cin >> t;
	
	while(t --) {
	int n;
	cin >> n;
	int marriedCouples = 0;
	bool married[n + 1] = {0};
	int singlePrincess = 1;

	vector<vector<int>> princesses(n+5);
	for(int i = 1; i <= n; i ++) {
		int noOfPrinces;
		cin >> noOfPrinces;
		while(noOfPrinces --) {
			int prince;
			cin >> prince;
			princesses[i].push_back(prince);
		}

	}
	for(int i = 1; i <= n; i ++) {
		bool foundMatch = false;
		for(int j = 0;  j < princesses[i].size(); j ++) {
			if(married[princesses[i][j]]) {
				continue;

			}
			marriedCouples ++;
			married[princesses[i][j]] = true;

			foundMatch = true;

			break;

		}
		if(!foundMatch) {
			singlePrincess = i;
		}
	}



	if(marriedCouples == n) {
		cout << "OPTIMAL" << endl;
	}

	else {
		for(int i = 1; i <= n; i ++) {
			if(!married[i]) {
				cout << "IMPROVE" << endl;
				cout << singlePrincess << " " << i << endl;
				break;
			}
		}
	}
	}
	
return 0;
 
} 