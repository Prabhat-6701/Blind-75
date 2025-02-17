#include<bits/stdc++.h>
using namespace std;

void rotateArr(int n, vector<int>&arr, int k){
    vector<int>temp(n);
    for(int i = 0; i < n; i++){
        temp[(i+k)%n] = arr[i];
    
    }
    arr = temp;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array: "<<endl;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the number of rotations: "<<endl;
    cin>>k;

    rotateArr(n,arr,k);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}