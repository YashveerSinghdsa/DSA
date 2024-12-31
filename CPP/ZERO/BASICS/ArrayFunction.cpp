#include<iostream>
using namespace std;
void arey(int arr[]){
    for(int i=0;i<5;i++){
        arr[i]+=10;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    arey(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}