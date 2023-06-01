#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;
//segment tree + tìm kiếm nhỉ phan -> 100
keqing(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m,k;cin>>n>>m>>k;
    int a[n],b[m];
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    sort(b,b+m);
    for(int i=0;i<n;i++){
        int *temp = upper_bound(b,b+m,a[i]);
        a[i]= min(abs(a[i]-*temp),abs(a[i]-*(temp-1)));

    }
    while(k--){
        int l,r;cin>>l>>r;
        l--;r--;
        int res = INT_MAX;
        for(int i=l;i<=r;i++){
            res=min(res,a[i]);
        }
        cout<<res<<endl;
    }
}