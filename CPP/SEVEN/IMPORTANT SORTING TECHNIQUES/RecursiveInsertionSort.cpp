#include<iostream>
using namespace std;
void insertionsort(int arr[],int i,int n){
    if(i>n-1){
        return ;
    }
    int j=i;
    while(j>0&&arr[j-1]>arr[j]){
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    j--;
    }
    insertionsort(arr,i+1,n);
}
int main(){
    int arr[]={13,46,24,52,20,9},n=6;
    insertionsort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}