#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //precompute
    unordered_map<int,int>mpp;
    for(int i=0;i<5;i++){
        mpp[arr[i]]+=1;    
    }    
    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q=5;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}