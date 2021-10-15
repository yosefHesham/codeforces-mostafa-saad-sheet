

#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 	
 	int n ,m;
 	cin >> n >> m;

 	for(int i = 0 ;i < n * m; i ++) {
 		char x;
 		cin >> x;
 		if(x == 'Y' || x == 'M' || x == 'C') {
 			cout << "#Color" << endl;
 			return 0;
 		}
 	}

 	cout << "#Black&White" << endl;
 	
return 0;
 
} 