#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int maxi = arr[0];
    int secondMax = INT_MIN;
    for(int i = 1; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    for(int i = 0; i<n; i++){
        if(arr[i] > secondMax && arr[i] < maxi){
            secondMax = arr[i];
        }
    }
    cout<<"The secondMax element is : "<<secondMax ;
}