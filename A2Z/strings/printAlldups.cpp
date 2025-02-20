#include<bits/stdc++.h>
using namespace std;

void printDups(string s){
    unordered_map<char,int>mpp;

    for(int i = 0; i<s.length(); i++){
        mpp[s[i]]++;
    }

    for(auto it : mpp){
        if(it.second > 1){
            cout<<it.first<<"->"<<it.second<<endl;
        }
      
    }
}
//main function
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;

    printDups(s);
}