#include<iostream>
#include<vector>
using namespace std;
int subarraywithmaxproduct(vector<int>&arr){
    int pre=1,suff=1;
    int ans=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(pre==0){
            pre=1;
        }
        if(suff==0){
            suff=1;
        }
        pre=pre*arr[i];
        suff=suff*arr[n-i-1];
        ans=max(ans,max(pre,suff));
    }
    return ans;
}
int main(){
    vector<int>arr={8,6,1,2,0,-1,6,0,9,5};
    cout<<subarraywithmaxproduct(arr);
    return 0;
}