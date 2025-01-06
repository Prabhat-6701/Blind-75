// #include<bits/stdc++.h>
// using namespace std;

// //Brute Force approach

// int maxSubarray(vector<int>& nums) {
//     int n = nums.size();
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += nums[j];
//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array:" << endl;
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter the elements of the array:" << endl;

//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     cout << "Maximum subarray sum is: " << maxSubarray(nums) << endl;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// //Optimal approach[Kadanes Algorithm]

// int maxSubarray(vector<int>& nums) {
//     int n = nums.size();
//     int maxi = INT_MIN;
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         sum += nums[i];
//         if(sum > maxi){
//             maxi = sum;
//         }

//         if(sum < 0){
//             sum = 0;
//         }
//     }
//     return maxi;
        
        
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array:" << endl;
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter the elements of the array:" << endl;

//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     cout << "Maximum subarray sum is: " << maxSubarray(nums) << endl;

//     return 0;
// }


//Follow up questions: subarrays with maximum sum
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& nums, int& ansStart, int& ansEnd) {  
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        if(sum == 0){
            start = i;
        }
        sum += nums[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
        
        
}

int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ansStart = -1, ansEnd = -1;

    int maxSum = maxSubarray(nums , ansStart, ansEnd);

    cout<<"Maximum subarray sum is: "<<maxSum<<endl;
    cout<<"The subarray with maximum sum is: [";

    for(int i = ansStart; i<=ansEnd; i++){
        cout<<nums[i]<<" ";
        if(i < ansEnd) cout<<", ";
    }
    cout<<"]"<<endl;
    return 0;
}
