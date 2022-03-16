#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    set<int> s;
    for(int i = 0;i<10;i++){
        int t;
        cin>>t;
        s.insert(t%42);
    }
    cout<<s.size();
    return 0;
}