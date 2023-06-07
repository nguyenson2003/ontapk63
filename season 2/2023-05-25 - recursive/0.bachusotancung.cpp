#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
#define mod 1000
int pow_mod(int a,int b){ // a^b
    /*
        nếu b=0 thì a^b=1
    */
    if(b==0)return 1; 
    /*
        a^100 = a^50 * a^50     -> b%2==0 thì a^b = a^(b/2) * a^(b/2)
        a^101 = a^50 * a^50 * a -> b%2==1 thì a^b = a^(b/2) * a^(b/2) * a
    */ 
    return (int)pow(pow_mod(a,b/2),2) %mod * (b%2==0?1:a) %mod; //công thức rút gọn
}

keqing(){
    int a,b;
    cin >>a>>b;
    // xuất ra ba số tận cùng của a^b
    printf("%03lld",pow_mod(a,b));
}