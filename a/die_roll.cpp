
// CF9-D2-A
#include<iostream>
#include<math.h>
#include<vector>	
#include <algorithm>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int x , y;
	cin >> x >> y;
 
	int maxVal = max(x,y);
 
	int probability = 6 - (maxVal - 1);
 
	if(probability == 6) {
		cout << "1/1" << endl;
	}
	else if(probability == 5) {
cout << "5/6" << endl;
 
	}
	else if(probability == 4) {
cout << "2/3" << endl;
 
	}
	else if(probability == 3) {
cout << "1/2" << endl;
 
	}
	else if(probability == 2) {
cout << "1/3" << endl;
 
	}
	else if(probability == 1) {
cout << "1/6" << endl;
 
	}
	else if(probability == 5) {
cout << "5/6" << endl;
 
	}
	else if(probability == 0) {
		cout << "0/1" << endl;
	}
 
 
  return 0;
}
