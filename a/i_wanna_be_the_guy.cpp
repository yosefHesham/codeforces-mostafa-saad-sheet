


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	int n;
	cin >> n;
	bool levels[n + 1] = {0};
	int p;
	cin >> p;
	while(p --) {
		int x;
		cin >> x;
		levels[x] = true;
	}
	int q;
	cin >> q;

	while(q --) {
		int x;
		cin >> x;
		levels[x] = true;
	}

	bool win = true;

	for(int i = 1; i <=n; i ++) {

		if(!levels[i]) {
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;



return 0;
 
}