#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;
//sinh hình
keqing(){
    int n,m,k;cin>>n>>m>>k;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    if(k==1){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='#')res++;
            }
        }
        cout<<res;
    }else if(k==2){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='.')continue;
                if(i>0 && a[i-1][j]=='#')res++;
                if(j>0 && a[i][j-1]=='#')res++;
            }
        }
        cout<<res;
    }else if(k==3){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='.')continue;
                int dem =0;
                if(i>0 && a[i-1][j]=='#')dem++;
                if(j>0 && a[i][j-1]=='#')dem++;
                if(i<n-1 && a[i+1][j]=='#')dem++;
                if(j<m-1 && a[i][j+1]=='#')dem++;
                res+=dem* (dem-1) /2;
            }
        }
        cout<<res;
    }
}
//1+3+1+3+6+3+1+3+1