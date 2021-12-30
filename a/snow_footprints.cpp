
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;
	 
	int main()
	{
		int n;
		string x;
		cin >> n;
		cin >> x;

		int start = 0;
		int end = 0;
		for(int i = 0; i < n; i ++) {
			if(x[i] != '.') {
				start =  i;
				
				break;
			}
		}

		for(int i = n - 1; i >= 0; i --) {
			if(x[i] != '.') {
				end =  i;
				
				break;
			}
		}
		if(x[start] == 'R' && x[end] == 'R') {
			cout << start + 1 << " "<< end + 1 + 1 << endl;
		}
		else if(x[start] == 'L' &&  x[end] == 'L') {
			cout << end + 1 << " " << start << endl;
		}
		else {
		for(int i = 0; i < n; i ++) {
			if(x[i] != '.' && x[i] != x[start]) {
				end =  i;
				
				break;
			}
		}
		cout << start + 1 << " " << end << endl;

	}
		return 0;
	}
			

