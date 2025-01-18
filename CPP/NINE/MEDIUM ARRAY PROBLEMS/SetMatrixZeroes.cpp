#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> zeromatrixbrute(vector<vector<int>>&matrix,int n,int m){
    int col[3]={0};
    int row[3]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i]||col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
vector<vector<int>> zeromatrixoptimal(vector<vector<int>>&matrix,int n,int m){
    //int col[3]={0};->matrix[0][..]
    //int row[3]={0};->matrix[..][0]
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                //mark the i-th row
                matrix[i][0]=0;
                //mark the j-th col
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j]!=0){
                //check for col & row
                if(matrix[0][j]==0||matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }            
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix={{1,0,1},{1,0,1},{1,0,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    for(auto it:matrix){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    cout<<"THE FINAL MATRIX IS"<<endl;
    matrix=zeromatrixoptimal(matrix,n,m);
    for(auto it:matrix){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}