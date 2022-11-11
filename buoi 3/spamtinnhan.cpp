#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

int n;
bool check[10]={};

void backtrack(int i,int value){
    if(i==n){
        cout<<value<<endl;
        return;
    }
    for(int j=1;j<=n;j++){
        if(check[j]) continue;
        check[j]=true;
        backtrack(i+1,value*10+j);
        check[j]=false;
    }
}

keqing(){ 
    cin>>n;
    backtrack(0,0);
}