#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	string sum;
	vector<int> sumElements;
	cin >> sum;

	for(int i = 0; i < sum.length(); i ++){
		if(sum[i] == '+') {
			continue;
		}
		else {
			sumElements.push_back(sum[i] - '0');
		}
	}
	sort(sumElements.begin(), sumElements.end());

	for(int i = 0; i < sumElements.size() - 1; i ++) {
		cout << sumElements[i] << '+';
	}
	cout << sumElements[sumElements.size() - 1]<< endl;

	
}


