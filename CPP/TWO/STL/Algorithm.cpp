#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //they are same
    if(p1.first>p2.first) return false;
    else return false;
}
int main(){
    int a[4],n=0;
    vector<int>v;
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    //sort(a,a+n,greater<int>);
    pair<int,int>p[]={{1,2},{2,1},{4,1}};
    //sort it according to second element
    //id=f second element is same, then sort
    //it according to first element but in descending
    //sort(a,a+n,comp);
    //{{4,1},{2,1},{1,2}};
    int num=7;
    int cnt=__builtin_popcount(num);
    long num2=789456123;
    int cnt2=__builtin_popcount(num);
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    int maxi=*max_element(a,a+n);
    return 0;
}