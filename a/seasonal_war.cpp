

#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int n;
vector<string> grid(50) ;
vector < vector < bool > > visited;



int dy[] = {1, 1, 1, -1 ,-1 -1, 0, 0};
int dx[] = {1, -1, 0, 1, -1 ,0, 1, -1};




// int dy[] = {-1, -1, -1,  0, 0,  1, 1, 1};
// int dx[] = {-1,  0,  1, -1, 1, -1, 0, 1};

bool isValid(int y, int x) {

	return y >= 0 && y < n && x >= 0 && x < n && grid[y][x] == '1' && !visited[y][x];
}
void dfs(int y,int x) {
	if(visited[y][x]) {
		return;
	}
	visited[y][x] = 1;
	for(int dir = 0; dir < 8; dir ++) {
		int newY = y + dy[dir];
		int newX = x + dx[dir];
		if(isValid(newY,newX)) {
			dfs(newY,newX);
		}
		
	}

}
int main()
{
	

	int imageNumber = 0;
	while(cin >> n) {
		imageNumber ++;
		int cnt = 0;
		visited.assign(n + 5,vector <bool> (n + 5));
		for(int i = 0; i < n; i ++) 
		cin >> grid[i];
	

	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < n; j ++) {
			if(!visited[i][j] && grid[i][j] == '1') {
				dfs(i,j);
				cnt ++;
			}
		}
	}

		printf("Image number %d contains %d war eagles.\n",imageNumber,cnt);

	}

   return 0;

 }
 

