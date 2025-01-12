#include<map>
#include<vector>
#include<iostream>
using namespace std;
//optimal solution for array with positive and negative elements
int longestsubarraywithsumkPN(vector<int>a,int k){
    map<int,int>presummap;
    int sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(presummap.find(rem)!=presummap.end()){
            int len=i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxlen;
}
//optimal solution for array with positive elements
int longestsubarraywithsumkP(vector<int>a,int k){
    int left=0,right=0;
    int sum=a[0];
    int maxlen=0;
    int n=a.size();
    while(right<n){
        while(left<=right&&sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }
    return maxlen;
}
int main(){
    vector<int>a={1,2,3,4,4,5,6,7,8,9};
    int k=6;
    cout<<longestsubarraywithsumkP(a,k);
    return 0;
}