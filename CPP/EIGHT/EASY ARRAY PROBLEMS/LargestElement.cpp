#include<iostream>
using namespace std;
int main(){
    int arr[]={12,123,21,56,98},n=5;
    int largest=arr[0];
    for(int i=0;i<n;i++){
        largest=arr[i];
    }
    cout<<largest;
    return 0;
}