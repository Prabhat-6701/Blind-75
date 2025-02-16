#include<bits/stdc++.h>
using namespace std;

bool sortedAndRotated(int n, vector<int>&arr){
    int cnt = 0;
    for(int i = 1; i<n; i++){
        if(arr[i-1] > arr[i]){
            cnt++;
        }
    }
    //check for last and first element

    if(arr[n-1] > arr[0]){
        cnt++;
    }
    if(cnt <=1){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    if(sortedAndRotated(n,arr)){
        cout<<"The array is sorted and rotated"<<endl;
    }
    else{
        cout<<"The array is not sorted and rotated"<<endl;
    }


}
