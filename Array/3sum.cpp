// brute approach
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>>threeSum(vector<int>&nums){
//     int n = nums.size();
//     set<vector<int>>st;

//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             for(int k = j+1; k<n; k++){
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                     vector<int>temp = {nums[i],nums[j],nums[k]};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>>output(st.begin(), st.end());
//     return output;

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

//     vector<vector<int>>ans = threeSum(nums);

//     for(auto it : ans){
//         for(auto el : it){
//             cout<<el<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;


// }


//better approach
// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>>threeSum(vector<int>&nums){
//     int n = nums.size();
//     set<vector<int>>st;

//     for(int i = 0; i<n; i++){
//         set<int>hashset;
//         for(int j = i+1; j<n; j++){
//             int target = -(nums[i] + nums[j]);
//             if(hashset.find(target) != hashset.end()){
//                 vector<int>temp = {nums[i], nums[j], target};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(nums[j]);
//         }
//     }
//     vector<vector<int>>output(st.begin(), st.end());
//     return output;

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

//     vector<vector<int>>ans = threeSum(nums);

//     for(auto it : ans){
//         for(auto el : it){
//             cout<<el<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;


// }

//optimal approach
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int>&nums){
    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());

    for(int i = 0; i<n; i++){
        if(i >0 && nums[i] == nums[i-1]){
            continue;
        }

        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0){
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else{
                vector<int>temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j<k && nums[j] == nums[j-1]){
                    j++;
                }
                while(j<k && nums[k] == nums[k+1]){
                    k--;
                }
            }
        }
    }
    return ans;

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

    vector<vector<int>>ans = threeSum(nums);

    for(auto it : ans){
        for(auto el : it){
            cout<<el<<" ";
        }
        cout<<endl;

    }
    return 0;


}