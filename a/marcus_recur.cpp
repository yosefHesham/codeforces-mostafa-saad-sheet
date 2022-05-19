

#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int n,m;

string mark ="IEHOVA#";
vector<string> path;


int dy[] = {-1,0,0}; 
int dx[] = {0,1,-1};
string dir[] = {"forth","right","left"};
//0  = forth, 1 = right, 2 = left;

bool isValid(int i,int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}


void dfs(vector<string>&maze,int i, int j, int idx) {
    if(idx > mark.size()) {
        return;
    }
    for(int k = 0; k < 3; k ++) {
       int y = i + dy[k];
       int x = j + dx[k];
       
       if(isValid(y,x) && maze[y][x] == mark[idx]){
        path.push_back(dir[k]);

        dfs(maze,y,x, idx + 1);
       } 
    }
}



int main()
{
    


   

    int t;
    cin >> t;
    while(t --) {
        cin >> n >> m;
        vector<string> maze(n);

       pair<int,int> startingPoint;
        for(int i = 0; i < n; i ++) 
            cin >> maze[i];


      for(int i = 0; i < maze[maze.size() - 1].size(); i ++)  {

        if(maze[maze.size() - 1][i] == '@') {
            startingPoint = {maze.size() - 1, i};
        }
      }

      dfs(maze,startingPoint.first,startingPoint.second,0);
      
        cout << path[0];
        for(int i = 1; i < path.size(); i ++) {
            cout << " " <<  path[i];
        }
        cout << "\n";
        path.clear();
    }
  

   return 0;

 }
 

