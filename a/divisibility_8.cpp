
	#include<iostream>
	#include<math.h>
	#include <bits/stdc++.h>
	 
	using namespace std;

	int fromChar(char x) {
		return x - '0';
	}
	 
	int main()
	{
		
		string number;

		cin >> number;
		int intNumber = 0;

		for(int i = 0; i < number.length(); i ++) {
				intNumber = 0;
				if(fromChar(number[i]) % 8 == 0) {
					cout << "YES" << endl;
					cout << fromChar(number[i]) << endl;
					return 0;
				}
		for(int j =  i + 1; j < number.length(); j ++) {
				intNumber = 0;
			 intNumber =  (fromChar(number[i]) * 10) + fromChar(number[j]);

			if(intNumber % 8 == 0) {

				cout << "YES" << endl;
											 cout << intNumber << endl;

				return 0;
			}

			for(int k = j + 1; k < number.length(); k ++) {
				intNumber = 0;
			intNumber = (fromChar(number[i])  * 10  + (fromChar(number[j]) ) )  * 10 + fromChar(number[k]);

			if(intNumber % 8 == 0) {
				cout << "YES" << endl;
				cout << intNumber << endl;
				return 0;
			}
		}	

		}	
		
		}

		cout << "NO" << endl;



	return 0;
	}
			

