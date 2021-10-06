#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
vector<float> coins;
float sum = 0;
int  minCoins = 0;
float testSum = 0;
int n;
cin >> n;

int coin;
 
for(int i = 0; i < n; i ++) {
		cin >> coin;
		sum += coin;
 		coins.push_back(coin);		
 
}
sort(coins.begin(), coins.end(), greater<int>());
 
 
for(int i = 0; i < coins.size(); i ++) {
 
		if(! (testSum  > sum / 2)) {
			testSum+= coins[i];
 
 
			minCoins ++;
		}
		else {
			break;
		}
	
}
cout << minCoins << endl;
return 0;
 
}