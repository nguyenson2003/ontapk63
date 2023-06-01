#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int n;cin>>n;
    int a[n+1]={};
    if(n==1){
        cout<<1;return 0;
    }
    if(n==2){
        cout<<2;return 0;
    }
    a[0]=1;a[1]=1;a[2]=2;
    for(int i=3;i<=n;i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    cout<<a[n];
}