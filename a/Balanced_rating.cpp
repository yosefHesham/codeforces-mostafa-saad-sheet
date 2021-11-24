
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;

	
	 
	int main()
	{
		int n;
		cin >> n;
		int s = 1;
		while(n --) {
			int x;
			cin >> x;
			if(x % 2 == 0 ) {
				cout << x / 2 << endl;
			}
			else {
				cout << (x + s) / 2 << endl;
				s *= -1;
			}
		}



	return 0;
	}
			

