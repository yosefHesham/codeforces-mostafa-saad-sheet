#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>



 
using namespace std;
 
int main()
{
	

	int step, mod;

	while(cin >> step >> mod){
	int visited[(int)1e6] = {0};
	bool isBad = false;

		long long tempStep = 0;
		for(int i = 0; i < mod; i ++){
			int generated = tempStep % mod;
			if(visited[generated]) {
				isBad = true;
				break;
			}
			visited[generated] = 1;
			tempStep += step;
		}

	

 
 	if(isBad) {
 	cout << setw(10) << step << setw(10) << mod << "    " << "Bad Choice\n\n";
 	}
 	else {
 			cout << setw(10) << step << setw(10) << mod << "    " <<  "Good Choice\n\n";
 	
 	}
 }
 
  return 0;
}
