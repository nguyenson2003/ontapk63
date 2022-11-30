#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int dp[n][m]={};
    int top[n][m]={};
    int left[n][m]={};
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0) if(a[i-1][j]==a[i][j]) top[i][j]=top[i-1][j]+1;
            if(j>0) if(a[i][j-1]==a[i][j]) left[i][j]=left[i][j-1]+1;
            dp[i][j]=1;
            if(i>0 && j>0){
                if(a[i][j] == a[i-1][j-1]){
                    dp[i][j] = min(dp[i-1][j-1],min(top[i][j],left[i][j]))+1;
                }
            }
            res = max(res, dp[i][j]);
        }
    }
    cout<<res;
}