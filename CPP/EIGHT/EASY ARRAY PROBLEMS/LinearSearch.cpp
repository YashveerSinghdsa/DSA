#include<iostream>
#include<vector>
using namespace std;
int linearsearch(int n,int num,vector<int> a){
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>a={1,2,3,60,50,54,39,20,643,90};
    int n=10,num=69;
    cout<<linearsearch(n,num,a);
    return 0;
}    