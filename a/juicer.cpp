#include <iostream>
using namespace std;

int main() {

	int oranges;
	int maxSize;
	int wasteSize;
	int maxWaste = 0;
	int cnt = 0;

	cin >> oranges >> maxSize >> wasteSize;

	while(oranges -- ) {

		int orange;
		cin >> orange;
		if(orange > maxSize) {
			continue;
		}
		else {
			maxWaste += orange;
		}
		if(maxWaste > wasteSize) {
			cnt ++;
			maxWaste = 0;
		}
	}


	cout << cnt << endl;
}	