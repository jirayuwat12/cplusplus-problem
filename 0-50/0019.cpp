#include<bits/stdc++.h>
#define FOR(i,s,n) for(int i = s;i<n;i++)
#define FORR(i,s,n) for(int i = s;i>=n;i++)
using namespace std;
// terrible bigO (O(n) = (n^2)! ))
// time exceeded with O(n) = (n^2)!
// pass with O(n) = ((n-1)^2)!
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> l(n-1);
    FOR(i,0,n-1) cin>>l[i].first>>l[i].second;
    int s,b;
    cin>>s>>b;
    sort(l.begin(),l.end());
    int res = INT32_MAX;
    do{
        vector<int> ps1(n),ps2(n);
        ps1[0] = l[0].first;
        ps2[0] = l[0].second;
        FOR(i,1,n-1){
            ps1[i] = ps1[i-1] * l[i].first;
            ps2[i] = ps2[i-1] + l[i].second;
        }
        FOR(i,0,n-1){
            FOR(j,i,n-1){
                res = min(res,abs((ps1[j] / ps1[i])*l[i].first - ps2[j] + ps2[i] - l[i].second));
                res = min(res,abs((ps1[j] / ps1[i])*l[i].first * s  - ps2[j] + ps2[i] - l[i].second - b));           
            }
        }
    }while(next_permutation(l.begin(),l.end()));
    cout<<res;
    return 0;
}