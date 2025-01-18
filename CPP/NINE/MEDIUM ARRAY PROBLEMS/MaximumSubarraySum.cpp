#include<iostream>
using namespace std;
//kadane's algorithm
int maximumsubarraysum(int arr[],int n){
    int sum=0,maxi=INT_MIN;
    int start=0;
    int ansStart=-1,ansEnd=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    //printing the subarray:
    cout<<"The subarray is: [ ";
    for (int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]\n";
    // To consider the sum of the empty subarray
    // uncomment the following check:
    //if (maxi < 0) maxi = 0;
    return maxi;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<maximumsubarraysum(arr,n);
    return 0;
}