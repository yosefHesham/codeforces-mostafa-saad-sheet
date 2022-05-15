


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 

bool visited[100] = {0};
stack<int> dfsStack;

 void dfs(int v, vector <vector <int> > &g) {
 		dfsStack.push(v);
 	
 	while(dfsStack.size() > 0) {
 		int u = dfsStack.top();
 		 visited[u] = 1;

 		dfsStack.pop();

 		for(int i = 0; i < g[u].size(); i ++ ) {
 			if(!visited[g[u][i]]) {
 				dfsStack.push(g[u][i]);
 			}
 		}
 	}

 }
 
int main(){
 
	int n;
	cin >> n;
	vector<pair<int,int>> coord(n);
	vector<vector<int>> graph(100);


	for(int i = 0; i < n; i ++) {
		int x,y;
		cin >> x >> y;
		coord[i].first = x;
		coord[i].second = y;
	}

	for(int i = 0; i < n; i ++) {
		for(int j = i + 1; j < n; j ++) {

			if(coord[i].first == coord[j].first || coord[i].second == coord[j].second) {

				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}


	int connected_components = 0;
	for(int i = 0; i < n; i ++) {
			if(!visited[i]) {
				dfs(i, graph);
				connected_components ++;
			}
		
	}

	cout << connected_components - 1 << endl;
	

return 0;
 
} 