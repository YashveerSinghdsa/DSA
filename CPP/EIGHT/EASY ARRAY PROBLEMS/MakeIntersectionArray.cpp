#include<iostream>
#include<vector>
#include<set>
using namespace std;
//make a intersection array of two sorted arrays
vector<int> makeintersectionbrute(vector<int> a,vector<int> b,int n){
    vector<int> ans;
    int vis[10]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]&&vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
        }
    }
    return ans;
}
vector<int> makeintersectionoptimal(vector<int> a,int n,vector<int> b,int m){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int>a={1,2,3,4,5,6,7,8,8,9,10};
    vector<int>b={1,2,3,4,4,5,6,7,8,9,9};
    vector<int>intersectionarray;
    int n=10,m=10;;
    intersectionarray=makeintersectionoptimal(a,n,b,m);
    for(auto it:intersectionarray){
        cout<<it<<" ";
    }
    return 0;
} 