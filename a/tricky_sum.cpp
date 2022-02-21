
		#include<iostream>
		#include<math.h>
		#include <bits/stdc++.h>
		 
		using namespace std;

		
		 
		int main()
		{

		
		int t;
		cin >> t;
		while(t --) {
				long long n;

				cin >> n;
		long long ans =  ((1 + n) * n) / 2; 

		vector<long long> powers;
		powers.push_back(1);
		for(int i = 1; i < 32; i ++) {
			long long nextPower = powers[i  - 1] * 2 ;// prev * 2;
			powers.push_back(nextPower);
	}

		long long sum = 0;
		for(int i = 0; i < 32; i ++) {
			if(powers[i] <= n) {
				sum += powers[i];
			}
			
		}	
		ans -= sum;
		ans  -= sum;

		cout << ans  << endl;
	}
		return 0;
		}
				

