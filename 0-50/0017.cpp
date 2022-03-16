#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int l[4];
    FOR(i,0,4) cin>>l[i];
    sort(l,l+4);
    int a = 0;
    do{
        if(l[0] < l[2]) continue;
        if(l[1] > l[3]) continue;
        a = max(a,min(l[0],l[2]) * min(l[1],l[3]));
    }while(next_permutation(l,l+4));
    cout<<a;
    return 0;
}