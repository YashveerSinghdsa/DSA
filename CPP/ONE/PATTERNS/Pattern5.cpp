#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    for(int j=1;j<=i;j++){
        for(int k=i;k>=j;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}