#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int n, vector<int>& arr){
    int i = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
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

    moveZerosToEnd(n,arr);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}