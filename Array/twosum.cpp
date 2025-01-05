//Brute Force

// #include<bits/stdc++.h>
// using namespace std;

// vector<int>twoSum(int n, vector<int>&arr, int target){

//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                 return {i,j};
//             }
//         }
//     }
//     return {};

// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;

//     vector<int>arr(n);

//     cout<<"Enter the elements of an array"<<endl;

//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     int target;
//     cout<<"Enter the target sun"<<endl;

//     cin>>target;

//     vector<int>result = twoSum(n, arr,target);

//     if(result.size() == 0){
//         cout<<"No pair founf"<<endl;
//     }
//     else{
//         cout<<result[0]<<result[1]<<endl;
//     }
// }

//Better approach

#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(int n, vector<int>&arr, int target){
    unordered_map<int,int>mpp;

    for(int i = 0; i<n; i++){
        int x = target - arr[i];
        if(mpp.find(x) != mpp.end()){
            return {mpp[x], i}; 
        }
        mpp[arr[i]] = i;
    }
    return {-1,-1};
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements of an array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target sun"<<endl;

    cin>>target;

    vector<int>result = twoSum(n, arr,target);

    if(result.size() == 0){
        cout<<"No pair founf"<<endl;
    }
    else{
        cout<<result[0]<<result[1]<<endl;
    }
}