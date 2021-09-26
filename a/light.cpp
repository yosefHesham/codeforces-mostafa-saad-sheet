#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {

	unsigned n;

	while(true) {
		cin >> n;
		if(n == 0) {
			break;
		}
		int result  = (int)sqrt(n);

		cout << (result * result == n ? "yes" : "no" )<< endl;
		
		// for(int i = 1; i <= n; i ++) {
		// 	if(n % i != 0 || i % 2 == 0) {
		// 		continue;
		// 	}

		// 	else if(n % i == 0) {
		// 						isOn = !isOn;
		// 	}
			 
		// }
		// if(isOn) {
		// 	cout << "yes" << endl;
		// }
		// else{
		// 	cout << "no" << endl;
		// }

	}
	return 0;

	
	
}


