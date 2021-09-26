#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int x, y;
	cin >> x >> y;
	int cnt = 0;
	while(x --) {
		cout << char('a' + (cnt % y));
		cnt ++;

	}

	
}


