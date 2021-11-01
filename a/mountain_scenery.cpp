
#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{

	int n,k;
	cin >> n >> k;
	int numbers = (2 * n) + 1;
	vector<int> vertices;
	vertices.push_back(1002);
	while(numbers --) {
		int y;
		cin >> y;
		vertices.push_back(y);

	}

	for(int i = 1; i <= vertices.size(); i ++) {
		if(k == 0) {
			break;
		}

		if(i % 2 == 0 ) {
			if(vertices[i] - 1 > vertices[i - 1] && vertices[i] - 1 > vertices[i + 1]) {
			vertices[i] --;
			k --;
			}else {
				continue;
			}
		}
	}

	for(int i = 1; i < vertices.size(); i ++) {

		cout << vertices[i] << " ";
	}
	cout << "\n";
}
		

