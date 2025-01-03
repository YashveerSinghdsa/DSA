#include<iostream>
using namespace std;
int main(){
    int i,l;
    cin>>i;
    l=i;
    for(int j=1;j<=i;j++){
        for(int k=1;k<=l;k++){
            cout<<k<<" ";
        }
        cout<<endl;
        l--;
    }
    return 0;
}