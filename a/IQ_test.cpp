
					#include<iostream>
					#include<math.h>
					#include <bits/stdc++.h>
					 
					using namespace std;
					 
					int main()
					{
						int arr[4][4];
						for(int i = 0; i < 4; i ++) {
							for(int j = 0; j < 4; j ++) {
								char color;
								cin >> color;
								arr[i][j] = color;
							}
							

					}
					for(int i = 0; i < 3; i ++) {
							for(int j = 0; j < 3; j ++) {
														int counter = 0;

								if(arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 1][j + 1]) {
									cout << "YES" << endl;
									return 0;
								}
								else if(arr[i][j] != arr[i][j + 1] && arr[i][j] != arr[i + 1][j] && arr[i][j] != arr[i + 1][j + 1]) {
									cout << "YES" << endl;
									return 0;	
								}
								else {
									if(arr[i][j] == arr[i][j + 1]) {
									counter ++;
									
									}
									if(arr[i][j] == arr[i + 1][j]) {
										counter ++;
									} 
									if( arr[i][j] == arr[i + 1][j + 1]) {
										counter ++;
									}
									if(counter == 2) {
										cout << "YES" << endl;
										return 0;
									}


								}

								

							}
							

					}
					cout << "NO" << endl;
					return 0;




						}
					

