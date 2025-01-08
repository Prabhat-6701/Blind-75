//brute approach
// #include<bits/stdc++.h>
// using namespace std;

// int maxArea(vector<int>&height){
//     int n = height.size();
//     int maxWater = 0;

//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int width = j-i;
//             int ht = min(height[i], height[j]);

//             int currWater = width * ht;
//             maxWater = max(maxWater, currWater);
//         }
//     }
//     return maxWater;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;

//     vector<int>height(n);
//     cout<<"Enter the elements of an array"<<endl;

//     for(int i = 0; i<n; i++){
//         cin>>height[i];
//     }

//     cout<<maxArea(height);
// }

//optimal approach

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>&height){
    int n = height.size();
    int maxWater = 0;
    int lp = 0, rp = n-1;

    while(lp < rp){
        int width = rp -lp;
        int ht = min(height[lp], height[rp]);

        int currWater = width * ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>height(n);
    cout<<"Enter the elements of an array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>height[i];
    }

    cout<<maxArea(height);
}