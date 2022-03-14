#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;

int main(){
    string n;
    cin>>n;
    bool is_all_cap = true;
    bool is_all_sma = true;
    for(char i : n){
        if('a' <= i && i <= 'z'){
            is_all_cap = false;
        }
        if('A' <= i && i<= 'Z'){
            is_all_sma = false;
        }
    }
    if(!is_all_cap && !is_all_sma){
        cout<<"Mix";
    }else if(is_all_cap){
        cout<<"All Capital Letter";
    }else{
        cout<<"All Small Letter";
    }
    return 0;
}