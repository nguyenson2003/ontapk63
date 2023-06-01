#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;
//qhd + monotonic stack -> 50
keqing(){
    int n;cin>>n;
    int a[n];for(int &x:a)cin>>x;
    int res = 0;
    for(int i=0;i<n;i++){
        int res_temp =a[i];
        int cur = a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]<cur)cur = a[j];
            res_temp+=cur;
        }
        cur=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]<cur)cur = a[j];
            res_temp+=cur;
        }
        res=max(res,res_temp);
    }
    cout<<res;
}