#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int k=0;k<n-2;k++){
        cout<<"*";
    for(int j=0;j<n-2;j++){
        cout<<" ";
    }
    cout<<"*"<<endl;;
    
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    return 0;
}