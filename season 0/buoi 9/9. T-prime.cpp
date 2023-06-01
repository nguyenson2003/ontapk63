#include <iostream>
#include <cmath>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 1000001;

keqing(){
    bool ngto[limit]={};ngto[0]=true;ngto[1]=true;
    for(int i=2;i<limit;i++){
        if(ngto[i])continue;
        for(int j=i*i;j<limit;j+=i){
            ngto[j]=true;
        }
    }
    int t;cin>>t;
    while(t--) {
        int x;cin>>x;
        int temp = sqrt(x);
        if(ngto[temp]==false && temp*temp == x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}