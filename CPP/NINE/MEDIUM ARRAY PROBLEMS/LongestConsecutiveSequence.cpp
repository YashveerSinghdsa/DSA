#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int longestsuccessiveelementbrute(vector<int>&nums){
    if(nums.size()==0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int lastsmaller=INT_MIN;
    int cnt=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmaller){
            cnt+=1;
            lastsmaller=nums[i];
        }
        else if(lastsmaller!=nums[i]){
            cnt=1;
            lastsmaller=nums[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int longestsuccessiveelementoptimal(vector<int>&nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int>nums={101,2,2,102,1,1,1,3,3,3,103,103,4,5};
    cout<<longestsuccessiveelementoptimal(nums);
    return 0;
}