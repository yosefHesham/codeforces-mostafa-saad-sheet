#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;




int main()
{
	
	int n;
	cin >> n;
	vector<long long > stewards;
	while(n -- ){

		long long  x;
		cin >> x;
		stewards.push_back(x);

	}
	int cnt = 0;
	
	sort(stewards.begin(), stewards.end());

	for(int i = 1; i < stewards.size() -1; i ++ ) {
		if(stewards[i] > stewards[0] && stewards[i] < stewards[stewards.size() - 1]) {
			cnt ++;
		}
	}	
	cout << cnt << endl;


return 0;
	
		
}