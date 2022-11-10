#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

int k,x;
int csc(int x){ //1+2+3+...+x
    return x*(x+1)/2;
}
int get(int line){
    if(line <= k) return csc(line);
    return csc(k)+csc(k-1)-csc(k*2-1-line);
}

int search(int l,int r){
    if(l==r) return l;
    int mid=(l+r)/2;
    int temp = get(mid);
    if(temp<x) return search(mid+1,r);
    return search(l,mid);
}
keqing(){ 
    int t; cin >> t;
    while(t--){//0: false, else: true
        cin>>k>>x;
        //while
        /*
        int l=1,r=k*2-1;
        while(l<r){
            int mid=(l+r)/2;
            int temp = get(mid);
            if(temp<x) l=mid+1;
            else r=mid;
        }// l==r
        */
       //search đệ quy
        cout<< search(1,k*2-1)<<endl;
    }
}