#include<iostream>
using namespace std;
int cnt=0;
void f(int n){
    if(cnt==n){
        return;
    }
    cout<<"1"<<endl;
    cnt++;
    f(n);
}
int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}