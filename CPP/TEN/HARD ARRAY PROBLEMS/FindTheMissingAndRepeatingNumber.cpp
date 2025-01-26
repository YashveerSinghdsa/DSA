#include<iostream>
#include<vector>
using namespace std;
vector<int> findmissingrepeatingnumbersbetter(vector<int>a){
    int n=a.size();
    int hash[7]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int repeating=-1,missing=-1;
    for(int i=1;i<=n;i++){
        if(hash[i]==2){
            repeating=i;
        }
        else if(hash[i]==0){
            missing=i;
        }
        if(missing!=-1&&repeating!=-1){
            break;
        }
    }
    return {repeating,missing};
}
vector<int> findmissingrepeatingnumbersoptimalmaths(vector<int>a){
    int n=a.size();
    //s-sn=x-y
    //s2-s2n
    int sn=(n*(n+1))/2;
    int s2n=(n*(n+1)*(2*n+1))/6;
    int s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        s2+=a[i]*a[i];
    }
    int val1=s-sn;//x-y
    int val2=s2-s2n;
    val2=val2/val1;//x+y
    int x=(val1+val2)/2;
    int y=x-val1;
    return {x,y};
}
vector<int> findmissingrepeatingnumbersoptimalxor1(vector<int>a){
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    int bitno=0;
    while(1){
        if((xr&(1<<bitno))!=0){
            break;
        }
        bitno++;
    }
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        //part of 1 club
        if((a[i]&(1<<bitno))!=0){
            one=one^a[i];
        }
        //part of 0 club
        else{
            zero=zero^a[i];
        }
    }
    for(int i=1;i<=n;i++){
            //part of 1 club
        if((i&(1<<bitno))!=0){
            one=one^i;
        }
        //part of 0 club
        else{
            zero=zero^i;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero){
                cnt++;
        }
    }
    if(cnt==2){
        return {zero,one};
    }
    return {one,zero};
}
vector<int> findmissingrepeatingnumbersoptimalxor2(vector<int>a){
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    int number=xr&~(xr-1);
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        //part of 1 club
        if((a[i]&number)!=0){
            one=one^a[i];
        }
        //part of 0 club
        else{
            zero=zero^a[i];
        }
    }
    for(int i=1;i<=n;i++){
            //part of 1 club
        if((i&number)!=0){
            one=one^i;
        }
        //part of 0 club
        else{
            zero=zero^i;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero){
                cnt++;
        }
    }
    if(cnt==2){
        return {zero,one};
    }
    return {one,zero};
}
int main(){
    vector<int>result,a={2,1,4,5,2,6};
    result=findmissingrepeatingnumbersoptimalxor2(a);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}