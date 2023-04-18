#include<bits/stdc++.h>
using namespace std;

struct node{
    int r,g,b;
};

bool cmp(node a,node b){
    if(a.r==b.r){
        if(a.g==b.g){
            return a.b<b.b;
        }
        return a.g<b.g;
    }
    return a.r<b.r;
}

int main(){
    int n;
    while(cin>>n){
        vector<node> v(n);
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v[i].r=stoi("0x"+s.substr(1,2),nullptr,16);
            v[i].g=stoi("0x"+s.substr(3,2),nullptr,16);
            v[i].b=stoi("0x"+s.substr(5,2),nullptr,16);
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[j].r<v[i].r && v[j].g<v[i].g && v[j].b<v[i].b){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        cout<<*max_element(dp.begin(),dp.end())<<endl;
    }
    return 0;
}