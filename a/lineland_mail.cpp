
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	long long n;
	cin >> n;
	long long  a[n];

	for(int i = 0; i < n; i ++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i ++) {
		long long maxi = max(  abs(a[i] - a[0]),  abs(a[i] - a[n - 1])  );
		long long mini = min(  abs(a[i] - a[abs(  (i - 1)/ - 1)]),  abs(a[i] - a[(i + 1) % n])  );
		cout << mini << " " << maxi << endl;
	}	
        	
	
 
  return 0;
		
}
