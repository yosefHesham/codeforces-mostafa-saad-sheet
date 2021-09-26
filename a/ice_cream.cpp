#include<iostream>
using namespace std;

int main() {

	long long n, total_amount;
	cin >> n >> total_amount;

	char sign;
	long long amount;
	int cnt = 0;

	while(n --) {
		cin >> sign >> amount;
		if(sign == '+') {
			total_amount += amount;
		}
		else {
			if(total_amount < amount) {
				cnt ++;
			}
			else {
				total_amount -= amount;
			}
		}
	}
	cout << total_amount << " " << cnt << endl;

	
}


