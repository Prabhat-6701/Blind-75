#include<bits/stdc++.h>
using namespace std;

int removeDups(int n, vector<int>& arr){
    int i = 0;

    for(int j = 1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] =arr[j];
            i++; 
        }
    }
    return i+1;
    
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<< removeDups(n,arr);


}