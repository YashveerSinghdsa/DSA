#include<iostream>
#include<map>
#include<vector>
using namespace std;
int majorityelement(vector<int>v){
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(v.size()/2)){
            return it.first;
        }
    }
    return -1;
}
//moore's voting algorithm
int mra(vector<int>v){
    int cnt=0;
    int el;
    for(int i=0;i<v.size();i++){
        if(cnt==0){
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==el){
            cnt1++;
        }      
    }
    if(cnt1>(v.size()/2)){
            return el;
    }
    return -1;
}
int main(){
    vector<int>v={1,1,1,2,3,1};
    cout<<mra(v);
    return 0;
}