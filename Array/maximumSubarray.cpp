#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>& nums) {
    int n = nums.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            maxi = max(maxi, sum);
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

    cout << "Maximum subarray sum is: " << maxSubarray(nums) << endl;

    return 0;
}
