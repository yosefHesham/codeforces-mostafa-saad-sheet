

#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int n;

bool isValid(vector<string>&grid, int i, int j) {

    return i >= 0 && i < n && j >= 0 && j < n && grid[i][j] != '.';
}
int dy[] = {1,-1,0,0};
int dx[] = {0,0,1,-1};

void dfs(vector<string>&grid, int i , int j) {


    if(grid[i][j] == '.') {
        return;
    }
    grid[i][j] = '.';
    for(int k = 0; k < 4; k ++) {
        int y = i + dy[k];
        int x = j + dx[k];
        if(isValid(grid,y,x)) {
            dfs(grid,y,x);
        }
    }
}
int main()
{
    


   
    int t ;
    cin >> t;
    int c = 0;
    while(t --) {
        int cc_count = 0;

        cin >> n;
        vector<string> grid(n);
        for(int i = 0; i < n; i ++) 
            cin >> grid[i];

        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                if(grid[i][j] == 'x') {
                dfs(grid,i,j);
                cc_count ++;
            }

            }
        }

       

        printf("Case %d: %d\n", ++c, cc_count);
    }
  

   return 0;

 }
 

