#include<iostream>
using namespace std;
int didswap;
void bubblesort(int arr[],int n){
    if(n<0){
        return;
    }
    for(int j=0;j<=n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int arr[]={13,46,24,52,20,9},n=6;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}