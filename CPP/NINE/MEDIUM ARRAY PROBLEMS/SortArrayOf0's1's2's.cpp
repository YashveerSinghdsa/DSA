#include<iostream>
#include<vector>
using namespace std;
vector<int> sortarray(vector<int>&arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
}
int main(){
    vector<int>result,arr={1,2,0,0,1,0,1,2,0,1,2};
    int n=11;
    result=sortarray(arr,n);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}