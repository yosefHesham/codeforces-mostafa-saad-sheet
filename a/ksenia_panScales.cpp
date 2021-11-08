
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;
	 
	int main()
	{

	string x;
	cin >> x;
	string additional;
	cin >> additional;
	int left = 0;
	int right = 0;
	int delimiter = 0;
	vector<char> left1, right1;
	for(int i = 0; i < x.length(); i ++) {
			if(x[i] == '|') {
				delimiter = i;
				break;
			}
		
	}
	left = delimiter;
	right = x.length() - (left + 1);
	for(int i = 0; i < additional.length(); i ++) {
		if(left < right) {
			left1.push_back(additional[i]);
			left ++;
		}
		else {
			right1.push_back(additional[i]);
			right ++;
		}
	}

	if(right != left) {
	cout << "Impossible" << endl;
	return 0;

	}
	for(int i = 0; i < left1.size(); i ++) {
		cout << left1[i];
	}
	cout << x;
	for(int i = 0; i < right1.size(); i ++) {
		cout << right1[i];
	}



	}
			

