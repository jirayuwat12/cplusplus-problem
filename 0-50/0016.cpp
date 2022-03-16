#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int a=0,b=0,g=0;
    string ans_a="",ans_b="",ans_g="";
    for(int i = 0;i<=(int)(n/3);i++){
        ans_a += "ABC";
        ans_b += "BABC";
        ans_g += "CCAABB";
    }
    for(int i = 0;i< n;i++){
        if(ans_a[i] == s[i]) a ++;
        if(ans_b[i] == s[i]) b ++;
        if(ans_g[i] == s[i]) g ++;
    }
    cout<<max(a,max(b,g))<<'\n';
    if(max(a,max(b,g))==a) cout<<"Adrian\n";
    if(max(a,max(b,g))==b) cout<<"Bruno\n";
    if(max(a,max(b,g))==g) cout<<"Goran\n";
    
    return 0;
}