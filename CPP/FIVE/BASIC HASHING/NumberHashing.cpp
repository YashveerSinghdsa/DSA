#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[100000]={0};
    for(int i=0;i<5;i++){
        hash[arr[i]]+=1;    
    }    
    int a=0;
    //prints highest frequency element
    for(int i=0;i<100001;i++){
        if(hash[i]>0){
            a=hash[i];
        }
        if(hash[i+1]>=a){
            a=hash[i+1];
        }
    }
    cout<<a<<endl;
    int q=5;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}