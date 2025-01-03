#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
    for(char ch='A';ch<='A'+i;ch++){
        cout<<ch<<" ";
    }
    cout<<endl;
    }
    return 0;
}