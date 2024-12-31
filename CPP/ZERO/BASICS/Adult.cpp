#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you are an adult";
    }
    else if(age<18)
    {
        cout<<"you are not an adult";
    }
    return 0;
}