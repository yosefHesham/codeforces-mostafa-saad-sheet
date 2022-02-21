#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>



 
using namespace std;
 
int main()
{
		
	int n = 100;
	int cnt2 = 0;

	for(int i2 = 0; i2 < 2 ; i2 ++) {
		for(int i3 = 0; i3 < 2; i3++) {
			for(int i5 = 0; i5 < 2; i5++) {
				for(int i7 = 0; i7 < 2; i7++) {
					int d = 1;
					int elementsCount = 0;
					if(i2) d*=2, elementsCount ++;
					if(i3) d*=3, elementsCount ++;
					if(i5) d*=5, elementsCount ++;
					if(i7) d*=7, elementsCount ++;
					if(elementsCount == 0){
						continue;
					}
					int sign = elementsCount % 2 == 1? 1 : -1;
					cnt2 += sign * n/d; 


				}

			}
		}
	}
	cout << cnt2 << endl;
 
 
 
  return 0;
}
