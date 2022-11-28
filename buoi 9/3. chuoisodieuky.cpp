#include <iostream>
#include <string>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    string inp;cin>>inp;
    int n = inp.size();
    int a,b;cin>>a>>b;
    int left[n]={};
    int right[n]={};
    left[0]=(inp[0]-'0')%a;
    for(int i=1;i<n;i++){
        left[i]=(left[i-1]*10 + inp[i]-'0')%a;
    }
    right[n-1]=(inp[n-1]-'0')%b;
    int heso = 10;
    for(int i=n-2;i>=0;i--){
        right[i] = (right[i+1] + (inp[i]-'0')*heso) %b;
        heso=heso*10%b;
    }
    for(int i=0;i<n-1;i++){
        if(left[i]==0 && right[i+1]==0 && inp[i+1]!='0'){
            cout<<"YES"<<endl;
            cout<<inp.substr(0,i+1)<<endl;
            cout<<inp.substr(i+1,n)<<endl;
            return 0;
        }
    }

    cout<<"NO";
}