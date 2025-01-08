#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>&nums){
    int n = nums.size();
        int low = 0;
        int high =n-1;
        int mini = INT_MAX;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[low] <= nums[mid]){
                mini = min(nums[low],mini);
                low = mid +1;
            }
            else{
                mini = min(mini,nums[mid]);
                high = mid -1;
            }
        }
        return mini;
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter the elements of an array"<<endl;  

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<< findMin(nums);
}