#include<iostream>
#include<map>
#include<vector>
using namespace std;
int subarraywithsumk(vector<int>a,int k){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;//{0,1}
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        //k
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    vector<int>a={4,2,2,6,4};
    int k=6;
    cout<<subarraywithsumk(a,k);
    return 0;
}