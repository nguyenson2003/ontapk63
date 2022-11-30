#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
// const int limit = 100000;

int convert(string x){
    int ck[10]={};
    for(char c:x) ck[c-'0']=1;
    int res = 0;
    for(int i=0;i<10;i++){
        res<<=1;
        res|=ck[i];
    }
    return res;
}

keqing(){
    int n;
    cin>>n;
    int limit = convert("0123456789")+1;
    int a[limit]={};
    for(int i=0;i<n;i++){
        string temp;cin>>temp;
        a[convert(temp)]++;
    }
    int res = 0;
    for(int i=0;i<limit;i++){
        for(int j=i;j<limit;j++){
            if((i|j) == limit-1){
                if(i!=j) res += a[i]*a[j];
                else res += a[i]*(a[i]-1)/2;
            }
        }
    }
    cout<<res;

}