#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

void swab(int &a,int &b){
    int t=a;
    a = b;
    b = t;
}

int main(){
    int a,b,c;
    string n;
    cin>>a>>b>>c>>n;
    if(c<a) swab(a,c);
    if(c<b) swab(c,b);
    if(b<a) swab(a,b);
    if(n == "ABC") cout<<a<<' '<<b<<' '<<c;
    if(n == "ACB") cout<<a<<' '<<c<<' '<<b;
    if(n == "BAC") cout<<b<<' '<<a<<' '<<c;
    if(n == "BCA") cout<<b<<' '<<c<<' '<<a;
    if(n == "CAB") cout<<c<<' '<<a<<' '<<b;
    if(n == "CBA") cout<<c<<' '<<b<<' '<<a;
    
    return 0;
}