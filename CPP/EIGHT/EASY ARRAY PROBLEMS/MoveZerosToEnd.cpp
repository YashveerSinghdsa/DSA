#include<iostream>
#include<vector>
using namespace std;
vector<int> movezerosbrute(int n,vector<int> a){
    //step1
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
        temp.push_back(a[i]);
        }
    }
    //step2
    int nz=temp.size();
    for(int i=0;i<nz;i++){
        a[i]=temp[i];
    }
    //step3
    for(int i=nz;i<n;i++){
        a[i]=0;
    }
    return a;
}
vector<int> movezerosoptimal(int n,vector<int> a){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    //no non zero numbers
    if(j==-1){
        return a;
    }
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}
int main(){
    vector<int>a={1,2,3,0,0,54,3,0,643,0};
    int n=10;
    a=movezerosoptimal(n,a);
    for(auto it:a){
        cout<<(it)<<" ";
    }
    return 0;
}