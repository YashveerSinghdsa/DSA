#include<iostream>
using namespace std;
int main(){
    int n,m,p;
    cin>>n;
    m=n;
    p=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*(m-1);k++){
            cout<<" ";
        }
        m--;
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}