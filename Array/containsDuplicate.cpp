//brute

// #include<bits/stdc++.h>
// using namespace std;

// bool containsDuplicate(vector<int>&nums){
//     int n = nums.size();
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(nums[i] == nums[j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;

//     vector<int>nums(n);

//     for(int i = 0; i<n; i++){
//         cin>>nums[i];
//     }

//     cout<<containsDuplicate(nums);
// }

//optimal
#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&nums){
    int n = nums.size();
    unordered_map<int,int>mpp;

    for(int i = 0; i<n;i++){
        mpp[nums[i]]++;

    }

    for(auto it : mpp){
        if(it.second>1){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>nums(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    cout<<containsDuplicate(nums);
}
