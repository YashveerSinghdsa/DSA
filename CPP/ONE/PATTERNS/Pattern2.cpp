#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    for(int j=0;j<i;j++){
        for(int k=-1;k<j;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}