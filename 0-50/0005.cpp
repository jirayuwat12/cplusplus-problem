#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    double a,b;
    cin>>a>>b;
    printf("%.6f",pow(pow(a,2)+pow(b,2),0.5));
    return 0;
}