//brute approach

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> answer(n, 1); // Initialize the answer array with size n, all elements as 1

//     // For each index, calculate the product of all elements except nums[i]
//     for (int i = 0; i < n; i++) {
//         int product = 1;
//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 product *= nums[j];
//             }
//         }
//         answer[i] = product;
//     }

//     return answer;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<int> result = productExceptSelf(nums);

//     cout << "The resulting array is: ";
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//better approach

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int>ans(n,1);
//     vector<int>prefix(n,1);
//     vector<int>suffix(n,1);

//     //prefix
//     for(int i = 1; i<n;i++){
//         prefix[i] = prefix[i-1] * nums[i-1];
//     }

//     for(int i = n-2; i>=0; i--){
//         suffix[i] = suffix[i+1] * nums[i+1];
//     }

//     for(int i = 0; i<n; i++){
//         ans[i] = prefix[i] * suffix[i];
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<int> result = productExceptSelf(nums);

//     cout << "The resulting array is: ";
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//optimal approach

#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans(n,1);
    
    //prefix
    for(int i = 1; i<n;i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix =1;

    for(int i = n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix; 
    }

    
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = productExceptSelf(nums);

    cout << "The resulting array is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}