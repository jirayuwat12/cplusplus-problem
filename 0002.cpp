#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int m = INT32_MAX;
    int M = INT32_MIN;
    int n;
    int t;
    cin>>n;
    FOR(i,0,n){
        cin>>t;
        if(t>M) M = t;
        if(t<m) m = t;
    }
    cout<<m<<'\n'<<M;
    return 0;
}