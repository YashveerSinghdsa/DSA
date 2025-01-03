#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    for(int j=1;j<=i;j++){
        for(int k=i;k>=j;k--){
            cout<<"*";
        }
        for(int l=0;l<j-1;l++){
            cout<<"  ";
        }
        for(int k=i;k>=j;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j=1;j<=i;j++){
        for(int k=1;k<=j;k++){
            cout<<"*";
        }
        for(int l=i-1;l>=j;l--){
            cout<<"  ";
        }
        for(int k=1;k<=j;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}