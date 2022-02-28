#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>



 
using namespace std;

long long calculateChessBoards(long long n ,long long m) {
	return ((n - 8 )+ 1) * ((m - 8) + 1);
}
 
int main()
{
	

	long long n, m, c;
	while(cin >> n >> m >> c) {
		if(n == 0) {

			return 0;
		}

		 if(c == 1) {
			cout << (calculateChessBoards(n,m) + 1) / 2 << endl;
		}
		else {
			cout <<calculateChessBoards(n,m) / 2 << endl;
		}
	}

   return 0;

 }
 

