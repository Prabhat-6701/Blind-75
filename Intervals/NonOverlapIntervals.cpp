#include<bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals){
    int n = intervals.size();
    if(n == 0){
        return 0;
    }
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });

    int end = intervals[0][1];
    int count = 1;

    for(int i = 1; i<n; i++){
        if(intervals[i][0] >= end){
            end = intervals[i][1];
            count++;
        }
    }
    return n-count;
}

int main(){
    vector<vector<int>> intervals = {{1,2}, {2,3}, {3,4}, {1,3}};
    cout<<eraseOverlapIntervals(intervals);
}