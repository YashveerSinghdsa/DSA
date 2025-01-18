#include<iostream>
#include<vector>
using namespace std;
void rotatematrixoptimal(vector<vector<int>>&mat){
    int n=mat.size();
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    //reverse
    for(int i=0;i<n;i++){
        //row is mat[i]
        reverse(mat[i].begin(),mat[i].end());
    }
}
int main(){
    vector<vector<int>>mat={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
    for(auto it:mat){
        for(auto ele:it){
            cout<<ele<<"\t";
        }
        cout<<endl;
    }
    cout<<"THE FINAL MATRIX IS"<<endl;
    rotatematrixoptimal(mat);
    for(auto it:mat){
        for(auto ele:it){
            cout<<ele<<"\t";
        }
        cout<<endl;
    }
    return 0;
}