#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int l = 0;
    vector<bool> v(n+1,true);
    FOR(i,2,n+1){
        if(v[i]){
            for(int j = i;j<n+1;j+=i){
                if(!v[j]) continue;
                v[j] = false;
                l++;
                if(k==l) {
                    cout<<j;
                    return 0;
                }
                // cout<<j<<' '<<l<<'\n';
            }
        }
    }
    return 0;
}