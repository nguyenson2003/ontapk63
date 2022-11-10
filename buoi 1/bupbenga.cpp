//vector, map, set, dequeue, prioperty_queue
//[1,2,3,5,7]
//đệ quy, quay lui, tham lam, chia để trị, quy hoạch động
#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
main()
{
    int n;cin>>n;
    int k;cin>>k;
    int a[n];
    for(int &x:a)cin>>x;
    sort(a,a+n,greater<int>());
    int res=0;
    deque<int> wait;
    for(int x:a){
        if(wait.size() && wait.front()-k>=x)wait.pop_front();
        else res+=x;
        wait.push_back(x);
    }
    cout<<wait.size()<<" "<<res;
    return 0;
}