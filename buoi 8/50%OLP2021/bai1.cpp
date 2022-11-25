#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;
//ucln -> 100
keqing(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res = 0;
    for(int i=a;i<=b;i++){
        if(i*c%d==0)res++;
    }
    cout<<res;
}