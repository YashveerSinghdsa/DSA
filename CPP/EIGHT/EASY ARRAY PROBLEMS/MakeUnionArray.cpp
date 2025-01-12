#include<iostream>
#include<vector>
#include<set>
using namespace std;
//make a union array of two sorted arrays
vector<int> makeunionbrute(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
vector<int> makeunionoptimal(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
    }
    return unionarr;
}
int main(){
    vector<int>a={1,2,3,4,5,6,7,8,8,9,10};
    vector<int>b={1,2,3,4,4,5,6,7,8,9,9};
    vector<int>unionarray;
    unionarray=makeunionoptimal(a,b);
    for(auto it:unionarray){
        cout<<it<<" ";
    }
    return 0;
} 