#include <iostream>
#include <iomanip>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int n,m;cin>>n>>m;
    int a[n];
    for(int &x:a){
        cin>>x;
    }
    int sum[n+1]={};
    for(int i=0;i<n;i++){
        sum[i+1]=sum[i]+a[i];
    }
    while(m--){
        int a,b;cin>>a>>b;
        cout<<sum[b]-sum[a-1]<<endl;
    }
}