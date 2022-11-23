#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int m,n;cin>>n>>m;
    if(m==0){
        cout<<0;return 0;
    }
    int a[n];
    for(int &x:a)cin>>x;
    int dp_bef[m+1]={};
    int dp_aft[m+1]={};
    dp_bef[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            if(j+a[i] <= m ) dp_aft[j+a[i]]=dp_bef[j];
            dp_aft[j]+=dp_bef[j];
        }
        for(int j=0;j<=m;j++){
            dp_bef[j]=dp_aft[j];
            dp_bef[j]%=mod;
            dp_aft[j]=0;
        }
    }
    cout<<dp_bef[m];
}