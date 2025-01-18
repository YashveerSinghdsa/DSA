#include<iostream>
#include<vector>
using namespace std;
//for equal no. of positive and negative elements
vector<int> rearrangearrayv1(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,0);
    int posindex=0,negindex=1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negindex]=nums[i];
            negindex+=2;
        }
        else{
            ans[posindex]=nums[i];
            posindex+=2;
        }
    }
    return ans;
}
//for not equal no. of positive and negative elements
vector<int> rearrangearrayv2(vector<int>&nums){
    vector<int>pos,neg;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            nums[index]=neg[i];
            index++;
        }
    }
    return nums;
}
int main(){
    vector<int>result,nums={1,2,3,-4,11,12,23,14,5,-6,-9,-8,7,-10};
    result=rearrangearrayv2(nums);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}