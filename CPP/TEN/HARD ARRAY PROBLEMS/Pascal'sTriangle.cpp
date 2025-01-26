#include<iostream>
using namespace std;
void generaterow(int n){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int ncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n-1,r-1)<<endl;
    generaterow(n);
    cout<<endl;
    for(int i=1;i<=n;i++){
        generaterow(i);
        cout<<endl;
    }
    return 0;
}