#include<iostream>

//// CF732-D2-A
#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>


 
using namespace std;
 
int main()
{
	int k, r;
 
	cin >> k >> r;
 
 
	for(int i = 1; ; i ++){
		int rem = (i * k) % 10;
 
		if(rem == 0 ) {
 
			cout << i << endl;
			break;
		}
		else if(rem  == r) {
 
			cout << i << endl;
			break;
		}
		else {
			continue;
		}
 
 
 
	}
 
 
 
 
  return 0;
}
