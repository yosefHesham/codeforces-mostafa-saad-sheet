
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;

	
	int isBasedOf4(string s) {
		int cnt = 0;
		for(int i = 0; i < s.length(); i ++) {
			if(s[i] == '1') {
				cnt ++;
			}
		}
		if(cnt > 1) {
			return 1;
		}
		return 0;
	};
	 
	int main()
	{

	string s;
	cin >> s;
	int n = s.length() - 1;
	if(n % 2 == 0) {
		cout << n / 2 + isBasedOf4(s)<< endl;
	}
	else {
		cout << ((n /2) ) + 1 << endl;
	}
	return 0;
	}
			

