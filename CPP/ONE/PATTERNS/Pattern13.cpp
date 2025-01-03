#include<iostream>
using namespace std;
int main(){
    int n,m,i;
    cin>>n;
    i=1;
    m=i;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}