#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> arrayleaders(vector<int>&a){
    vector<int> ans;
    int maxi=INT_MIN;
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>ans,a={10,22,12,0,3,6};
    ans=arrayleaders(a);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}