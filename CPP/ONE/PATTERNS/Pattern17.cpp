#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n;
    m=n;
    o=1;
    for(int a=0;a<n;a++){
        for(int b=0;b<m-1;b++){
            cout<<" ";
        }
        m--;
        char ch='A';
        int breakpoint=(2*a+1)/2;
        for(int c=1;c<=2*a+1;c++){
            cout<<ch;
            if(c<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        o++;
        o++;
        cout<<endl;
    }
    return 0;
}