//use 5 as first input
#include<iostream>
#include<algorithm>
using namespace std;
void f(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[]={5,4,3,1,2};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//alternative code
/*#include <iostream>

using namespace std;
//Function to print array
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
//Function to reverse array using recursion
void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverseArray(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
}*/