#include<iostream>

//// CF732-D2-A
#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

int arr[(int)1e6];
int cumSum[(int)1e6];

 
using namespace std;
 
int main()
{
		
		int n;
		cin >> n;
		for(int i = 0; i < n; i ++) {
			cin >> arr[i];

		}

		for(int i = 0; i < n; i ++) {
			cumSum[i] = arr[i];
			if(i != 0) {
				cumSum[i] += cumSum[i - 1];
			}

		}

		for(int i = 0; i < n; i++){
			cout << cumSum[i] << endl;
		}

		int t;
		cin >> t;

		while(t--) {
			int l,r;
			cin >> l >> r;
			l --; r --;
			if(l != 0) {
				cout << cumSum[r] - cumSum[l] << endl;
			}
			else {
				cout << cumSum[r] << endl;
			}
		}
 
 
 
  return 0;
}
