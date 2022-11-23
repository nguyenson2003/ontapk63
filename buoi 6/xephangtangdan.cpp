#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int t;cin>>t;
    int test=0;
    while(test++<t){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem[n+1]={};
        int kq=0;
        for(int i=0;i<n;i++){
            dem[a[i]]=dem[a[i]-1]+1;
            kq = max(kq,dem[a[i]]);
        }
        printf("#Case %lld: %lld\n",test,n-kq);
    }
}