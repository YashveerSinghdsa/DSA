#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    for(int j=1;j<=i;j++){
        for(int k=1;k<=j;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}