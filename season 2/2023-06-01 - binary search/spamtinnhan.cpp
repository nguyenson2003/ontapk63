#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

int csc(int x){
    return x*(x+1)/2; //1+2+3+...+x
}
/*
đếm xem ở dòng thứ "line" nhắn được bao nhiêu dấu @
cách nhắn tin: 1,2,3,...,k,...,3,2,1
*/
int count_spam(int line,int k){
    if(line<=k)return csc(line);
    return csc(k)+csc(k-1)-csc(k*2-1-line);
}
/*
tìm kiếm nhị phân, left
*/
int bin_search(int k,int l, int r,int x){
    if(l==r)return l;
    int mid=(l+r)/2;
    if(count_spam(mid,k)<x)return bin_search(k,mid+1,r,x);
    else return bin_search(k,l,mid,x);
}
keqing(){
    int t;std::cin>>t;
    while(t--) {
        int k,x;
        cin>>k>>x;
        cout<<bin_search(k,0,k*2-1,x)<<endl;
    }
}