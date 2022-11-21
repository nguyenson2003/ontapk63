#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int m,n;cin>>m>>n;
    int a[n];
    for(int &x:a)cin>>x;
    int dp[m+1]={};
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+a[i] > m) break;
            dp[j+a[i]] += dp[j];
        }
    }
    cout<<dp[m];
}