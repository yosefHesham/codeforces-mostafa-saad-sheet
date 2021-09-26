
// CF265-D2-A
#include<iostream>
#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	string s;
	string t;
 
	cin >> s;
	cin >> t;
 
	int i = 0;
	int j = 0;
 
	while(i <= s.length() && j <= t.length()) {
 
		if(s[i] == t[j]) {
			i ++;
		}
		j ++;
 
	}
	cout << i + 1 << endl;
 
  return 0;
}
