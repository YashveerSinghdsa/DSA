#include<iostream>
using namespace std;
void reversearray(int arr[],int start,int end);
void leftrotatebrute(int arr[],int n,int d){
    d=d%n;
    int temp[10];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}
void leftrotateoptimal(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
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
    leftrotateoptimal(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}