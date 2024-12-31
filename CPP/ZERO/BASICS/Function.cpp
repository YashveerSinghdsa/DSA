#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void printname(){
    cout<<"Yashveer\n";
}
void printname(string a){
    cout<<"hey "<<a<<endl;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
void swapdeez(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b<<endl;
}
void swaprizz(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b<<endl;
}
int main(){
    string a;
    int b,c,res,d,e;
    a="blake";
    b=23;
    c=14;
    d=859;
    e=475;
    printname();
    printname(a);
    res=sum(b,c);
    cout<<res<<endl;
    res=max(b,c);
    cout<<res<<endl;
    swapdeez(d,e);
    cout<<d<<endl<<e<<endl;
    swaprizz(d,e);
    cout<<d<<endl<<e<<endl;
    return 0;
}