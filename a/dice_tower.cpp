
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{

int n, top;
cin >> n;
cin >> top

int bottom = 7 - top;

while(n --) {
	int l, r;
	cin >> l >> r;
	if(l == bottom ||  l == top || r == bottom || r == top) {

		cout << "NO" << endl;
		return 0;
	}
}
cout << "YES" << endl;

}
		

