

#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

vector < vector < int > > graph(30);
stack<int> dfsStack;
bool  visited[30];
int convertToNumber(char cha) {
	return cha - 65;
}


void dfs(int v) {

	dfsStack.push(v);	

	while(dfsStack.size() > 0) {

		int u = dfsStack.top();
		dfsStack.pop();
		 visited[u] = 1;


		for(int i = 0; i < graph[u].size(); i ++) {
			if(!visited[graph[u][i]]) {
				dfsStack.push(graph[u][i]);
			}
		}
	}


}

int main()
{
	

	int t;
	cin >> t;
	while(t --) {
		memset(visited, false, sizeof(visited));

	char nodes;
	cin >> nodes;
	int n;

	 n = convertToNumber(nodes);

	for(int i = 0; i < n; i ++ ) {
		string vertices;
		cin >> vertices;
		int u = convertToNumber(vertices[0]);

		int v = convertToNumber(vertices[1]);


		graph[u].push_back(v);
		graph[v].push_back(u);


	}
	int cc_count = 0;
	for(int i = 0; i < n; i ++) {
		if(!visited[i]) {
			dfs(i);
			cc_count ++;
		}
	}

	cout << cc_count << endl;

	if(t)	
			printf("\n");
		for(int i=0; i< 30; i++)
			graph[i].clear();

}

   return 0;

 }
 

