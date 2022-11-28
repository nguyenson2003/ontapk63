#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    int t;cin>>t;
    int test = 0;
    while(test++ < t){
        int n;cin>>n;
        printf("Test Case #%lld: ",test);
        cout<<(n&1?"Kratos":"Atreus")<<endl;
    }
}