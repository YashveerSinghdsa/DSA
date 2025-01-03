#include<iostream>
using namespace std;
int main(){
    int n,m,o,m2,o2;
    cin>>n;
    m=n;
    o=1;
    for(int a=0;a<n;a++){
        for(int b=0;b<m-1;b++){
            cout<<" ";
        }
        m--;
        for(int c=1;c<=o;c++){
            cout<<"*";
        }
        o++;
        o++;
        cout<<endl;
    }
    m2=n;
    o2=n+1;
    for(int j=0;j<n;j++){
    for(int i=1;i<=2*m2-1;i++){
        cout<<"*";
    }
    m2--;
    cout<<endl;
    for(int k=o2;k>n;k--){
        cout<<" ";
    }
    o2++;
    }
    return 0;
}