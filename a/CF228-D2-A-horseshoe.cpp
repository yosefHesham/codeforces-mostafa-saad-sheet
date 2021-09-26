
//is your horse shoe on the other hoof (CF228-D2-A)
#include<iostream>
#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	set<long long> colors;
	for(int i = 0; i < 4; i ++) {
			int x;
			cin >> x;
 
			colors.insert(x);
 
	}
 
	cout << 4 - colors.size() << endl;
 
  return 0;
}
 
