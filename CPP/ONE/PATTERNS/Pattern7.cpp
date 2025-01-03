#include<iostream>
using namespace std;
int main(){
    int n,m,o;
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
    return 0;
}