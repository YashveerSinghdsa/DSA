#include<iostream>
#include<string>
using namespace std;
int main(){
    int a1;
    long a2;
    float a3;
    double a4;
    char a5;
    string a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    a5='A';
    a6="hello yashveer";
    getline(cin,a6);
    cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl;
    return 0;
}