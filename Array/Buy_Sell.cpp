#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int>& prices){
    int n = prices.size();
    int maxProfit = 0;
    int mini = prices[0];

    for(int i = 1; i<n; i++){
        int profit = prices[i] - mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini, prices[i]);
    }

    if(maxProfit > 0){
        return maxProfit;
    }
    return 0;

}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>prices(n);
    for(int i = 0; i<n; i++){
        cin>>prices[i];
    }

    cout<<maxprofit(prices);

}