
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;
	 
	int main()
	{
		int n;
		cin >> n;
		int arr[n];

		for(int i = 0; i < n; i ++) {
			cin >> arr[i];
		}

		for(int i = 0; i < n; i ++) {
			int counter = 0;
			for(int j = 0; j < n; j ++) {
				if(arr[i] == arr[j]) {
					counter ++;
				}
			}
			if((2 * counter )  - 1 > n) {
				cout << "NO" << endl;
				return 0;
			}
		}

		cout << "YES" << endl;
		return 0;
	}
			

