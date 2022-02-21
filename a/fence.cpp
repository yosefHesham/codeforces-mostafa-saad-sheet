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
		
		int n,k;
		cin >> n;
		cin >> k;
		for(int i = 0; i < n; i ++) {
			cin >> arr[i];
			cumSum[i] += arr[i];
			if(i != 0) {
				cumSum[i] += cumSum[i - 1];
			}

		}

	

		int mini = 1e9;
		int index = 0;
		for(int i = k - 1; i < n; i ++) {
			int r = i;
			int l = r - (k - 1);

			int ans = cumSum[r];
			if(l != 0) {
				ans-=  cumSum[l - 1];
			}
			if(ans < mini) {
				mini = ans;
				index = l;
			}

		}
		cout << index + 1<< endl;
 
 
 
  return 0;
}
