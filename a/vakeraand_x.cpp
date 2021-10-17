

#include<iostream>
#include<math.h>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
 int n;
 cin >> n;
 char a[n + 1][n + 1];
 set<char> diagonals;
 set<char> other;
for(int i = 1; i <= n; i ++) {
    for(int j = 1; j <= n; j ++) {
      
      cin >> a[i][j];
    }
 }


 for(int i = 1; i <= n; i ++) {
    for(int j = 1; j <= n; j ++) {
        if(i == j || i == (n - j) + 1) {
            diagonals.insert(a[i][j]);
        }
        else {
            other.insert(a[i][j]);
        }
    }
 }

 auto first = diagonals.begin();
 auto second = other.begin();
 if((diagonals.size() == 1 && other.size() == 1) && *first != *second) {
    cout << "YES" << endl;
    return 0;
 }

 cout << "NO" << endl;




return 0;
 
} 