#include<iostream>
#include<vector>
using namespace std;
int issorted(int n,vector<int>a){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){}
        else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>a={1,2,3,4,100,95};
    int n=6;
    cout<<issorted(n,a);
    return 0;
}