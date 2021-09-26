#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t,k,d;
	cin >> n >> t >> k >> d;
	int totalTime = 0;

	while(n > 0) {
		n -= k;		
		totalTime += t;
	}

	if(totalTime > (t + d)) {

		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;
	return 0;



}