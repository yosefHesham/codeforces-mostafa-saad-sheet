


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	
	int n,m;
	cin >> n >> m;
	int cnt = 0;;

	for(int i = n + 1; i < m; i ++) {
		bool hasPrimes = true;

		for(int j = 2; j < i; j ++) {

			if(i % j == 0) {
				hasPrimes = false;
				continue;
			}
		}
		if(hasPrimes) {
			cnt ++;
		}

	}
	for(int i = 2; i < m; i ++) {
		if(m % i == 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	if(cnt > 0) {
		cout  << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	
return 0;
 
} 