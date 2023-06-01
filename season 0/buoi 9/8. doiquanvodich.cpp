#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

keqing(){
    while(true){
        int a,b;cin>>a>>b;
        if(a==0 && b==0)return 0;
        int res =0;
        for(int i=1,j=1;true;){ //i*(i+1)/2: tam giac, j*j: hinh vuong
            if(j*j>=b)break;
            int tam_giac = i*(i+1)/2;
            int hinhvuong=j*j;
            if(hinhvuong-1==tam_giac && a<hinhvuong)res++;
            if(tam_giac<hinhvuong)i++;
            else j++;
        }
        cout<<res<<endl;
    }
}