
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;

	
	 
	int main()
	{

		int n, a, b;
		cin >> n >> a >> b;
		int result = 0;
		if(b < 0) {
			result =  ((a % n) + ((b % n + n) % n)) % n;
		}
		else {
		result =  ((a % n) + (b% n)) % n;

	}
	if(result == 0) {
		cout << n << endl;
	}
	else {
		cout << result << endl;
	}



	return 0;
	}
			

