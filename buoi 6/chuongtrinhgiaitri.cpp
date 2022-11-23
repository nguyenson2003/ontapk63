#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 1000001;

int bat[1000001]={};
int tat[1000001]={};
keqing(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        bat[a]++;
        tat[b]++;
    }
    int dem_bat=0,dem_tat=0;
    for(int i=0;i<limit;i++){
        while(tat[i]--){
            dem_bat--;
            res+=dem_bat;
        }
        dem_bat+=bat[i];
    }
    cout<<res;
}