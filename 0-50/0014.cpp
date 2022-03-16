#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int n = min(a,b)+1;
    while(n--){
        if(a%n==0 &&b%n==0){
            cout<<n;
            break;
        }
    }
    return 0;
}