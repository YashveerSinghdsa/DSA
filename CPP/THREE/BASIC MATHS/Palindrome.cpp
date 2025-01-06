#include<iostream>
using namespace std;
int main(){
    int dup,n,revnum=0;
    cin>>n;
    dup=n;
    while(n>0){
        int ld=n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }
    if(dup==revnum){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}