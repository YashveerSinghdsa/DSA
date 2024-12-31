#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="Yashveer";
    int len=a.size();
    cout<<a<<endl<<len<<endl;
    a[len-1]='z';
    cout<<a<<endl<<a[len-1]<<endl;
    return 0;
}