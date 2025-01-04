#include<iostream>
#include<set>
using namespace std;
int main(){
    //Everything is same as set
    //only stores duplicate elements also
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(1);//all 1's erased
    int cnt=ms.count(1);
    //only a single one erased
    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1+2));
    //rest all function same as set
    return 0;
}