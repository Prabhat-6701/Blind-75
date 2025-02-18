#include<bits/stdc++.h>
using namespace std;

vector<int>rearrangeArray(int n, vector<int>&arr){
    vector<int> pos;
    vector<int>neg;

    for(int i = 0; i<n; i++){
        if(arr[i] < 0 ){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }

        if(neg.size() < pos.size()){
            for(int i = 0; i < neg.size(); i++){
                arr[2*i] = pos[i];
                arr[2*i+1] = neg[i];
            }
            int index = neg.size() * 2;

            for(int i = neg.size(); i < pos.size(); i++){
                arr[index] = pos[i];
                index++;
            }
        }
        else{
            for(int i = 0; i < pos.size(); i++){
                arr[2*i] = pos[i];
                arr[2*i+1] = neg[i];
            }
            int index = pos.size() * 2;

            for(int i = pos.size(); i < neg.size(); i++){
                arr[index] = neg[i];
                index++;
            }

        }
    }
    return arr;
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

   vector<int>ans = rearrangeArray(n,arr);
    
        for(int i = 0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return 0;
}