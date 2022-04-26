


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	
	int n ;
	cin >> n;
	vector<pair<int,int>> loveVector;
	loveVector.push_back(make_pair(0,5));
	for(int i = 1; i <= n; i ++) {
		int lover;
		cin >> lover;
		loveVector.push_back(make_pair(i, lover));
	}

	for(int i = 1; i <= n; i ++) {
		int secondLove = loveVector[loveVector[i].second].second;
		int thirdLove = loveVector[secondLove].second;
		if(loveVector[i].first == thirdLove) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	
return 0;
 
} 