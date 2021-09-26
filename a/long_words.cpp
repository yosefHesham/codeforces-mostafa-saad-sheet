#include<iostream>
using namespace std;

int main() {

	int n;

	cin >> n;
	while(n --) {
	string word;
	cin >> word;

	if(word.length() - 1  < 10) {
		cout << word << endl;

	}

	else {cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl; }
}


}