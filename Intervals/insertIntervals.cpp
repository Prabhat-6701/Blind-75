#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals){
    vector<vector<int>>ans;
    int i = 0, n = intervals.size();

    //Add all the intervals ending before newInterval starts
    while(i < n && intervals[i][1] < newIntervals[0]){
        ans.push_back(intervals[i]);
        i++;
    }

    //Merge overlapping intervals
    while(i<n && intervals[i][0] <= newIntervals[1]){
        newIntervals[0] = min(newIntervals[0], intervals[i][0]);
        newIntervals[1] = max(newIntervals[1], intervals[i][1]);
        i++;
    }
    ans.push_back(newIntervals);

    //adding after newintervals

    while(i<n){
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
}

int main(){
    vector<vector<int>>intervals = {{1,3}, {6,9}};
    vector<int>newIntervals = {2,5};

    vector<vector<int>>ans = insert(intervals,newIntervals);

    cout<<"[";
    for(int i = 0; i<ans.size(); i++){
        cout<<"[" << ans[i][0] <<"," <<ans[i][1] <<"]";
        if(i != ans.size()-1){
            cout<<",";
        }
    }
    cout<<"]";

}