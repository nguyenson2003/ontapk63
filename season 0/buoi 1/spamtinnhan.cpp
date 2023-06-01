//vector, map, set, dequeue, prioperty_queue
//[1,2,3,5,7]
//đệ quy, quay lui, tham lam, chia để trị, quy hoạch động
#include <iostream>
using namespace std;
#define int long
#define long long long
int csc(int x){
    return x*(x+1)/2;
}
int get(int line, int k){
    if(line<=k)return csc(line);
    return csc(k)+csc(k-1)-csc(k*2-1-line);
}
main()
{
    int t;cin>>t;
    while(t--){
        int k,x;cin>>k>>x;
        if(get(k*2-1,k)<=x) {
            cout<<k*2-1<<endl;
            continue;
        }
        int l=1,r=k*2-1;
        while(l<r){
            int mid=(l+r)/2;
            int temp = get(mid,k);
            if(temp>=x)r=mid;
            else l=mid+1;
        }
        cout<<r<<endl;
    }

}
//4 1 > 4 2