#include<iostream>
#include<map>
using namespace std;
void MultiMap(){
    //everything same as map, only it can store multiple keys
    //only mpp[key] cannot be used here
}
void UnorderedMap(){
    //same as set and unordered_set difference.
}
int main(){
    map<int,int>mpp;
    map<int,pair<int,int>>mpp2;
    map<pair<int,int>,int>mpp1;
    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    mpp1[{2,3}]=10;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];
    auto it=mpp2.find(3);
    //cout<<*(it).second;
    auto it2=mpp2.find(5);
    //This is the syntax
    auto it3=mpp.lower_bound(2);
    auto it4=mpp.upper_bound(3);
    //erase, swap, size, empty, are same as above
    return 0;
}