#include<iostream>
using namespace std;
int cnt=1;
void f(int n){
    if(cnt==n+1){
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    f(n);
}
int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}