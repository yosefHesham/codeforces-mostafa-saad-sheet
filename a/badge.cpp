


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
	
	int n ;
	cin >> n;
	vector<pair<int,int>> students;
	students.push_back(make_pair(0,5));
	for(int i = 1; i <= n; i ++) {
		int lover;
		cin >> lover;
		students.push_back(make_pair(i, lover));
	}
	vector<int> studentsWithTwoHoles;


	for(int i = 1; i <= n; i ++) {

		bool visited[10000] = {0};

		pair<int,int> currentStudent = students[i];
					

		while(true) {
			visited[currentStudent.first] = true;

			int nextStudent = currentStudent.second;
			if(visited[nextStudent]){
				studentsWithTwoHoles.push_back(nextStudent);

				break;
			}
			currentStudent = students[nextStudent];
			

		}
	
	}

	for(int i = 0; i < studentsWithTwoHoles.size(); i ++) {
			cout << studentsWithTwoHoles[i] << " ";
	}
	cout << "\n";
	
return 0;
 
} 