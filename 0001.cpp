#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s = a + b+ c;
    if(s>=80){
        cout<<"A";
        return 0;
    }if(s >= 75){
        cout<<"B+";
        return 0;
    }if(s>= 70){
        cout<<"B";
        return 0;
    }if(s>= 65){
        cout<<"C+";
        return 0;
    }if(s>= 60){
        cout<<"C";
        return 0;
    }if(s>= 55){
        cout<<"D+";
        return 0;
    }if(s>= 50){
        cout<<"D";
        return 0;
    }
    cout<<"F";
    
    return 0;
}