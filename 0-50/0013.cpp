#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int l[9];
    int s = 0;
    FOR(i,0,9) {
        cin>>l[i];
        s += l[i];
    }
    FOR(i,0,9){
        FOR(j,i+1,9){
            if(s-l[i]-l[j]== 100){
                FOR(k,0,9){
                    if(k!= i && k!=j){
                        cout<<l[k]<<'\n';
                    }
                }
            }
        }
    }
    return 0;
}