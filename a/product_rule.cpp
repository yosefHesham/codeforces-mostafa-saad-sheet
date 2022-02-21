#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

int arr[(int)1e6];

 
using namespace std;
 
int main()
{

	string chars = "BC";

	char ans[3];

	for(int i = 0; i < 2 ;i ++) {
		for(int j = 0; j < 2; j ++) {
			for(int k = 0; k < 2; k ++) {
				ans[0] = chars[i];
				ans[1] = chars[j];
				ans[2] = chars[k];
				cout << ans << "\n";
			}
		}
	}
 
 
  return 0;	
}
