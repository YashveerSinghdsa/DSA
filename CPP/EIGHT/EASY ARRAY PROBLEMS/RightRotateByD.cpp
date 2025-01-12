#include<iostream>
using namespace std;
void rightrotatebrute(int arr[],int n,int d){
    d=d%n;
    int temp[10];
    for(int i=n-d;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=n-1;i>=d;i--){
        arr[i]=arr[i-d];
    }
    for(int i=d-1;i>=0;i--){
        arr[i]=temp[i+(n-d)];
    }
}
void rightrotateoptimal(int arr[],int n,int d){
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+n-d);
    reverse(arr,arr+n);
}
void reversearray(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n=10,d;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cin>>d;
    rightrotateoptimal(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}