#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int n, vector<int>&arr){
    //finding breaking point

    int index = -1;

    for(int i = n-2; i>0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }

    // finding element just greater than breaking point
    if(index == -1){
        reverse(arr.begin(),arr.end());
    }

    for(int i  = n-1; i > index; i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }
    sort(arr.begin() + index + 1,arr.end());
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

    nextPermutation(n,arr);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}