#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
#define mod 1000
int pow_mod(int a,int b){
    if(b==0)return 1;
    return (int)pow(pow_mod(a,b/2),2) %mod * (b%2==0?1:a) %mod;
}

keqing(){
    int a,b;
    cin >>a>>b;
    printf("%03lld",pow_mod(a,b));
}