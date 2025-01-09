//brute approach
// #include<bits/stdc++.h>
// using namespace std;

// vector<int>repeatAndMissing(vector<int>& nums){
//     int n = nums.size();
//     int repeating = -1, missing = -1;

//     for(int i = 1; i<=n; i++){
//         int cnt = 0;
//         for(int j = 0; j<n; j++){
//             if(nums[j] == i){
//                 cnt++;
//             }

//         }
//         if(cnt == 2) repeating = i;
//         else if(cnt == 0) missing = i;

//         if(repeating != -1 && missing != -1){
//             break;
//         }
//     }
//     return {repeating, missing};
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;

//     vector<int>nums(n);
//     cout<<"Enter the elements of the array: ";
//     for(int i = 0; i<n; i++){
//         cin>>nums[i];
//     }

//     vector<int>ans = repeatAndMissing(nums);

//     for(auto x: ans){
//         cout<<x<<" ";
//     }
// }

//better approach
#include<bits/stdc++.h>
using namespace std;

vector<int>repeatAndMissing(vector<int>& nums){
    int n = nums.size();
    int hash[n+1] {0};

    int repeating = -1, missing = -1;
    for(int i = 0; i<n; i++){
        hash[nums[i]]++;
    }

    for(int i = 1; i<=n; i++){
        if(hash[i] == 2)repeating = i;
        else if(hash[i] == 0)missing = i;

        if(repeating != -1 && missing != -1){
            break;
        }
    }

    return {repeating, missing};
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    vector<int>ans = repeatAndMissing(nums);

    for(auto x: ans){
        cout<<x<<" ";
    }
}