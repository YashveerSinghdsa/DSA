#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    vector<int>v1(5,100);
    vector<int>v2(5);
    vector<int>v3(v2);
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" "<<endl;
    it=it-1;
    cout<<*(it)<<" "<<endl;
    vector<int>::iterator it3=v.end();
    vector<int>::reverse_iterator it1=v.rend();
    vector<int>::reverse_iterator it2=v.rbegin();
    cout<<v[0]<<" "<<v.at(0)<<endl;
    cout<<v.back()<<" "<<endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" "<<endl;
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" "<<endl;
    }
    for(auto it:v){
        cout<<it<<" "<<endl;
    }
    //{10,20,12,23}
    v.erase(v.begin()+1);
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);//{10,20,35}[start,end)
    //Insert function
    vector<int>v4(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100};
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}
    vector<int>copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}
    //{10,20}
    cout<<v.size();//2
    //{10,20}
    v.pop_back();//{10}
    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2);//v1->{30,40},v2->{10,20}
    v.clear();//erases the entire vector
    cout<<v.empty();
    return 0;
}