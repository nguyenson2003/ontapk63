#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int n,a,b;cin>>n>>a>>b;
    int res_a=0,res_b=0;
    res_b=n/b;
    while(res_b!=0){
        if(res_a*a + res_b*b == n){
            break;
        }
        res_b--;
        while(res_a*a + res_b*b < n) res_a++;
    }
    if(res_a*a + res_b*b == n) cout<<res_a+res_b;
    else cout<<-1;
}