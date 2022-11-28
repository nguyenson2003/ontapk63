#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int n;cin>>n;
    int m;cin>>m;
    int a[n]; for(int &x:a)cin>>x;
    int b[m]; for(int &x:b)cin>>x;
    sort(a,a+n);
    sort(b,b+m);
    int res = 0;
    for(int i=0,j=0;i<n && j <m;i++){
        if(a[i]>b[j]){
            res++;j++;
        }
    }
    cout<<res;
}