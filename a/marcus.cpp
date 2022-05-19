

#include<iostream>

#include<math.h>
#include<vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;







int main()
{
    

     string mark ="IEHOVA#";

   

    int t;
    cin >> t;
    while(t --) {
         char currentStep = '@';
        int n,m;
        cin >> n >> m;
        vector<string> maze (n);
        vector<string> path;
        for(int i = 0; i < n; i ++) 
            cin >> maze[i];

       int idx = 0; 
       int i = n - 1;;
        while(currentStep != '#'){
           
            for(int j = 0; j < m ;j ++) {

               
                if(maze[i][j] == currentStep) {
                   
                     if(mark[idx] == maze[i][j + 1] && j < m - 1) {
                        currentStep = maze[i][j + 1];
                         path.push_back("right");
                         idx ++;
                         
                    }
                      else if(mark[idx] == maze[i][j - 1] && j > 0) {
                         currentStep = maze[i][j - 1];
                         path.push_back("left");
                         idx ++;
                       
                    }
                     if(i > 0 && mark[idx] == maze[i - 1][j]) {
                        currentStep = maze[i - 1][j];
                        path.push_back("forth");
                        i --;
                        idx ++;

                        break;
                    }
                }

            
        }
    }
        cout << path[0];
        for(int i = 1; i < path.size(); i ++) {
            cout << " " <<  path[i];
        }
        cout << "\n";
    }
  

   return 0;

 }
 

