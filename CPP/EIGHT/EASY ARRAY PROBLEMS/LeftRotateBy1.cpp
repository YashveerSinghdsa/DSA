#include<iostream>
#include<vector>
using namespace std;
vector<int> rotatearray(vector<int>&arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int n=5;
    arr=rotatearray(arr,n);
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}