#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
string twosumv1(int n,vector<int>a1,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=a1[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            return "YES";
        }
        mpp[a]=i;
    }
    return "NO";
}
vector<int> twosumv2(int n,vector<int>a1,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=a1[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]=i;
    }
    return {-1,-1};
}
string twosumv1optimal(int n,vector<int>a1,int target){
    int left=0,right=n-1;
    sort(a1.begin(),a1.end());
    while(left<right){
        int sum=a1[left]+a1[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return "NO";
}
int main(){
    vector<int>result,a1={2,6,5,8,11};
    int n=5,target=14;
    cout<<twosumv1optimal(n,a1,target);
    return 0;
}