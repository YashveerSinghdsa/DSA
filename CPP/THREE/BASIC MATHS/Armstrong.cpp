#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,n1,dup,sum=0,cnt=0;
    cin>>n;
    dup=n;
    n1=n;
    while(n>0){
        cnt++;
        n=n/10;
    }
    cout<<cnt<<endl;
    while(n1>0){
        int ld=n1%10;
        sum=sum+pow(ld,cnt);
        n1=n1/10;
    }
    if(sum==dup){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}