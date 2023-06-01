#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int n,a,b;cin>>n>>a>>b;
    if(n==0){
        cout<<0;return 0;
    }
    int dp[n+1]={};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i>=a) dp[i] += dp[i-a];
        if(i>=b) dp[i] += dp[i-b];
        dp[i] %= 1000000007;
    }
    cout<<dp[n];
}