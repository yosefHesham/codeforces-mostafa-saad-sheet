

#include<vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



void insertion_sort(vector<int>& data) {

	for(int i = 1; i < data.size(); i ++) {
		int j = i - 1;
		int key = data[i];
		while(j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j --;
		}
		data[j + 1] = key;
	}


}
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> answer;

        int minDiff =INT_MAX;
        for(int i = 0; i < arr.size() - 1; i ++) {
            if(arr[i + 1] - arr[i] < minDiff) {
                minDiff = arr[i + 1] - arr[i];
            }
        }

       
           
        for (int i = 0; i < arr.size() - 1; ++i) {
            if (arr[i + 1] - arr[i] == minDiff) {
                answer.push_back({arr[i], arr[i + 1]});
            }
        }

        return answer;
    }
};

int main() {
	
}