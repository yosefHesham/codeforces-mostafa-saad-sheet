

#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 	
 	int n;
 	vector<string> team1;
 	 vector<string> team2;
 	 cin >> n;
 	 string team;
 	 cin >> team;
 	 team1.push_back(team);
 	 n = n - 1;
 	while(n --) {
 		cin >> team;
 		if(team != team1[0]) {
 			team2.push_back(team);
 			continue;
 		}
 		team1.push_back(team);


 	}

 	if(team1.size() > team2.size()) {
 		cout << team1[0] << endl;
 		return 0;
 	}
	cout << team2[0] << endl;
return 0;
 
} 