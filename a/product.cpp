#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int const maxim = 600;
int main() {
	string a;
	string b;
	
	while(cin >> a) {
		cin >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int result[maxim];
		memset(result,0,sizeof(result));

		for(int i = 0; i < a.length(); i ++) {

			for(int j = 0; j < b.length(); j ++){

				result[i + j] += (a[i] - '0') * (b[j] - '0');
			}
		}

	for(int i = 0; i < maxim - 1; i ++) {
		result[i + 1] += result[i] / 10;
		result[i] = result[i] % 10;
	}
			int i = maxim - 1;

	while(i > 0 && result[i] == 0) i --;

	for(; i >= 0; i --) {

		cout << result[i];
	}
	cout << '\n';
	}

	
	
	return 0;



}