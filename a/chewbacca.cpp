
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;
	 
	int main()
	{

	long long x;
	cin >> x;
	vector<long long> digits;

	while(x > 10) {
		digits.push_back( min(9 - (x % 10), x % 10));
		x = x / 10;
	}
	if(min(x,9-x) == 0 || x == 10) {
		cout << x;

	}
	else {
			cout << min(x,9-x);

	}

	for(int i = digits.size() - 1; i >= 0; i --) {
		cout << digits[i];

	}
	}
			

