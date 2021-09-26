#include<iostream>
#include<math.h>
#include<vector>	
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases;
	cin >> testCases;

	int wires[testCases + 1];
	for(int i = 1; i <= testCases; i ++) {

		cin >> wires[i];
	}

	int shootes;
	cin >> shootes;

	while(shootes --) {
		int wire, birdPosition;

		cin >> wire >> birdPosition;

		if(wire - 1 == 0) {

			wires[wire + 1] = wires[wire + 1] + (wires[wire] - birdPosition);
			wires[wire] = 0;
		}
		else if(wire + 1 == testCases + 1) {
						wires[wire  - 1] = wires[wire - 1] + (birdPosition - 1);
						wires[wire] = 0;
		}
		else {
			wires[wire + 1] = wires[wire + 1] + (wires[wire] - birdPosition);
			wires[wire  - 1] = wires[wire - 1] + (birdPosition - 1);
			wires[wire] = 0;
		}


	}

	for(int i = 1; i<= testCases; i ++) {
		cout << wires[i] << endl;
	}


  return 0;
}













	



