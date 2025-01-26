#include<iostream>
#include<algorithm>
using namespace std;
void mergebrute(int arr1[],int arr2[],int n,int m){
    int arr3[9];
    int left=0;
    int right=0;
    int index=0;
    while(left<n&&right<m){
        if(arr1[left]<=arr2[right]){
            arr3[index]=arr1[left];
            left++,index++;
        }
        else{
            arr3[index]=arr2[right];
            right++,index++;
        }
    }
    while(left<n){
        arr3[index++]=arr1[left++];
    }
    while(right<m){
        arr3[index++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n){
            arr1[i]=arr3[i];
        }
        else{
            arr2[i-n]=arr3[i];
        }
    }
}
void mergeoptimal1(int arr1[],int arr2[],int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0&&right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--,right++;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
void swapifgreater(int arr1[],int arr2[],int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void mergeoptimal2(int arr1[],int arr2[],int n,int m){
    int len=(n+m);
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            //arr1 and arr2
            if(left<n&&right>=n){
                swapifgreater(arr1,arr2,left,right-n);
            }
            //arr2 and arr2
            else if(left>=n){
                swapifgreater(arr2,arr2,left-n,right-n);
            }
            //arr1 and arr1
            else{
                swapifgreater(arr1,arr1,left,right);
            }
            left++,right++;
        }
        if(gap==1){
            break;
        }
        gap=(gap/2)+(gap%2);
    }
}
int main(){
    int arr1[]={1,3,5,7},arr2[]={0,2,6,8,9};
    int n=4,m=5;
    mergeoptimal2(arr1,arr2,n,m);
    for(int i=0;i<n+m;i++){
        if(i<n){
            cout<<arr1[i]<<" ";
        }
        else{
            cout<<arr2[i-n]<<" ";
        }
    }
    return 0;
}