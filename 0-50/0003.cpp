#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int m1[m][n];
    int m2[m][n];
    FOR(i,0,m){
        FOR(j,0,n){
            cin>>m1[i][j];
        }
    }
    FOR(i,0,m){
        FOR(j,0,n){
            cin>>m2[i][j];
        }
    }
    FOR(i,0,m){
        FOR(j,0,n){
            cout<<m1[i][j] + m2[i][j]<<' ';
        }
        cout<<'\n';
    }
    
    return 0;
}