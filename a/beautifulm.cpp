#include <iostream> 
#include <math.h>
using namespace std;

	
int main(){

	int a[6][6];
	int minNumber;
	bool exit = false;

	for(int i = 1; i <= 5; i ++){
		for(int j = 1; j <= 5; j ++){
			cin >> a[i][j];
		}
	}

	for(int i = 1; i <= 5; i ++){
		for(int j = 1; j <= 5; j ++){

			if(a[i][j] == 1){
				minNumber = abs(3 - i) + abs(3 - j);
				exit = true;
				break;
			}
		}
		if(exit == true){
			break;	
		}

	}

	cout << minNumber << endl;
	return 0;


}