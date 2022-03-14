#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;


int main(){
    string n;
    cin>>n;
    int a=1,b=0,c=0;
    for(char i : n){
        if(i=='A'){
            swap(a,b);
        }else if(i=='B'){
            swap(b,c);
        }else{
            swap(a,c);
        }
    }
    if(a) cout<<1;
    if(b) cout<<2;
    if(c) cout<<3;
    return 0;
}