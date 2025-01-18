#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextpermutation(vector<int>&a){
    int ind=-1;
    int n=a.size();
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            ind=1;
            break;
        }
    }
    if(ind==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>ind;i--){
        if(a[i]>a[ind]){
            swap(a[i],a[ind]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;
}
int main(){
    vector<int>a={2,1,5,4,3,0,0};
    nextpermutation(a);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    //inbuilt c++ stl function
    next_permutation(a.begin(),a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}