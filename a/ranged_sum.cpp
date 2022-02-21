#include<iostream>

//// CF732-D2-A
#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

int arr[(int)1e6];

 
using namespace std;
 
int main()
{

int t;
int n;
cin >> t;
cin >> n;

while(t--) {
	int r,l;
	cin >> l >> r;
	arr[l] += 1;
	arr[r+1] -= 1;
}	

for(int i = 1; i <= n; i ++) {
	arr[i] += arr[i - 1];

}	
	for(int i = 1; i <= n; i ++) {
		cout << arr[i] << " "	;
	}
 
 
 
  return 0;	
}
