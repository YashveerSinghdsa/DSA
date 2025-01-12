#include<vector>
#include<iostream>
using namespace std;
int removeduplicates(vector<int>&arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    vector<int>a={1,1,1,1,1,5};
    int n=6;
    cout<<removeduplicates(a,n)<<endl;
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*(it)<<" "<<endl;
    }
    return 0;
}