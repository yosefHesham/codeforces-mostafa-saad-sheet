


#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 

bool visited[100] = {0};
stack<int> dfsStack;
bool isCycle(vector<int> path, int edge_count) {
 	if(edge_count == path.size() && edge_count % 2 != 0 ) {
 		return true;
 	}
 	return false;

 }

 bool dfs(int v, vector <vector <int> > &g) {
 		dfsStack.push(v);
 	vector<int> path;
	int edge_count = 0;
 	
 	while(dfsStack.size() > 0) {
 		int u = dfsStack.top();
 		if(!visited[u]) {
 		 visited[u] = 1;
 		 path.push_back(u);
 		}
 		dfsStack.pop();

 		for(int i = 0; i < g[u].size(); i ++ ) {
 			if(!visited[g[u][i]]) {
 				edge_count ++;
 				dfsStack.push(g[u][i]);
 			}
 		}
 	}


 	return isCycle(path, edge_count);

 }

 
 
int main(){
 
	int n, m;
	cin >> n;
	cin >> m;
	vector<vector<int>> graph(n + 5);


	for(int i = 0; i < m; i ++) {
		int x,y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}




	int cycles = 0;
	for(int i = 1; i <= n; i ++) {
			if(!visited[i]) {
				bool isCycle = dfs(i, graph);
				if(isCycle) {
				cycles ++;

				}
			}
		
	}

	if((n - cycles) % 2 != 0) {
		cycles++;
	}
	cout << cycles << endl;
	

return 0;
 
} 