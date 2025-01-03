#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n;
    m=n;
    o=n+1;
    for(int j=0;j<n;j++){
    for(int i=1;i<=2*m-1;i++){
        cout<<"*";
    }
    m--;
    cout<<endl;
    for(int k=o;k>n;k--){
        cout<<" ";
    }
    o++;
    }
    return 0;
}