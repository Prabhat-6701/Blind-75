//Brute force approach
// #include<bits/stdc++.h>
// using namespace std;

// int maxProduct(vector<int>&nums){
//     int maxi = INT_MIN;

//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i;j < nums.size(); j++ ){
//                 int product = 1;
//                 for(int k = i; k<=j; k++){
//                     product = product * nums[k];
//                 }
//                 maxi = max(product,maxi);
//             }
//         }
//         return maxi;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;

//     vector<int>nums(n);
//     cout<<"Enter the elements of an array"<<endl;  
//     for(int i = 0; i<n; i++){
//         cin>>nums[i];
//     }

//     cout<<maxProduct(nums);
// }

//Better approach

#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>&nums){
     int n = nums.size();
        int maxi = INT_MIN;
        int prefix =1, suffix = 1;

        for(int i =0; i<n; i++){
            if(prefix == 0)prefix = 1;
            if(suffix == 0) suffix = 1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];

            maxi = max(maxi, max(suffix,prefix));
        }

        return maxi;
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

    cout<<maxProduct(nums);
}