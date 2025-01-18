#include<iostream>
#include<vector>
using namespace std;
int maximumprofit(vector<int>&prices){
    int mini=prices[0];
    int maxprofit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
    }
    return maxprofit;
}
int main(){
    vector<int>prices={7,2,1,4,5,6,3};
    cout<<maximumprofit(prices);
    return 0;
}