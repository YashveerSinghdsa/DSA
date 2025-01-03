#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    char ch;
    cin>>n;
    for(int i=n;i>0;i--){
        ch='@';
        ch+=i;
        for(int j=0;j<=m;j++){
            cout<<ch<<" ";
            if(ch=='@'+n){
                break;
            }
            ch+=1;
        }
        m++;
        cout<<endl;
    }
    return 0;
}