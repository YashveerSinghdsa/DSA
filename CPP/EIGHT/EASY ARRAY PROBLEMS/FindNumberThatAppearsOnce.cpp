#include<iostream>
#include<vector>
using namespace std;
int getsingleelement(vector<int>&arr){
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr=xorr^arr[i];
    }
    return xorr;
}
int main(){
    vector<int>arr={1,1,2,3,3,4,4,5,5};
    cout<<getsingleelement(arr);
    return 0;
}