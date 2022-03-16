#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(b<c) swap(b,c);
    cout<<max(a-b-1,b-c-1);
    return 0;
}