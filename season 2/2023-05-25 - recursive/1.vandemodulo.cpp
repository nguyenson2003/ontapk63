#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
int mod = 0;
int mul_mod(int a,int b){
    if(b==0)return 0;
    return  mul_mod(a,b/2)*2 %mod + (b%2==0?0:a) %mod;
}
int pow_mod(int a,int b){
    if(b==0)return 1;
    int temp = pow_mod(a,b/2);
    return mul_mod(mul_mod(temp,temp) %mod , (b%2==0?1:a)) %mod;
}
keqing(){
    int t;cin>>t;
    while(t-->0){
        string a1;int b;
        cin >>a1>>b>>mod;
        int a=0;
        for(char c:a1)a=(a*10+(c-'0'))%mod;
        printf("%lld\n",pow_mod(a,b));
    }
}