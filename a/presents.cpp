
        
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;
 

int main()
{
	int n;
	cin >> n;

	int a[n + 1];
	int b[n + 1];

	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}

	for(int i = 1; i <= n; i ++) {
			for(int j = 1; j <= n; j ++) {
				if(i == a[j]) {
					b[i] = j;
					break;
				}
				else {
					continue;
				}

			}

	}
		for(int i = 1; i <= n; i ++) {
		cout << b[i] << " ";
	}

	
	cout << "\n";
	
 
  return 0;
		
}

