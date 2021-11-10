
			#include<iostream>
			#include<math.h>
			#include <bits/stdc++.h>
			 
			using namespace std;
			 
			int main()
			{

				int n, k;

				cin >> n >> k;
				int covered = 0;
				int l,r  = 0;
				for(int i = 0; i < n; i ++) {
					cin >> l >> r;
					covered += abs(l - r) + 1;

				}
				if(covered < k) {

					cout <<  (k - covered) << endl;

				}
				else {
					int left = 0;
					int right = pow(10,5);
					int mid = (right + left) / 2;
					for(int i = 0; i < pow(10,5); i ++) {
							if((covered + i) % k == 0) {

								cout << i  << endl;
								return 0;
							}
							else {
								continue;
							}



					}
				}



			}
					

