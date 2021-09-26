#include<iostream>
#include <bits/stdc++.h>
#include <string>


using namespace std;

int main() {
	set<char> distinctLetters;
	string letters;
	  std::getline (std::cin,letters);

	for(int i = 1; i < letters.length() - 1; i ++) {
		if(letters[i] == ',' || letters[i] == ' ') {
			continue;
		}
		else {
			distinctLetters.insert(letters[i]);
		}

	}

	cout << distinctLetters.size() << endl;



}