#include<iostream>
using namespace std;
int main(){
    int i,m;
    cin>>i;
    m=0;
    for(int j=0;j<i;j++){
        for(int k=-1;k<j;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int j=0;j<i-1;j++){
        for(int k=i-1;k>m;k--){
            cout<<"*";
        }
        m++;
        cout<<"\n";
    }
    return 0;
}