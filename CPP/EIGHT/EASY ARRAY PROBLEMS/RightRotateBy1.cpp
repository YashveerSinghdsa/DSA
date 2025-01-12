#include<iostream>
#include<vector>
using namespace std;
vector<int> rotatearray(vector<int>&arr,int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
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