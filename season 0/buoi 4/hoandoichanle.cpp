#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;
keqing(){
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        int a[n];
        int b[n];
        stack<int> st;
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
        }
        for(int i = 0 ;i < n;i++){
            cin>>b[i];
        }
        //đẩy vào stack theo thu tu giam dan
        for(int i=0;i<n;i++){
            if(st.empty() || a[st.top()] > a[i]){
                st.push(i);
            }
        }
        int res = 2*n+10;
        for(int i=0;i<n;i++){
            int temp = st.top();
            st.pop();
            while(!st.empty() && a[st.top()] < b[i]){
                temp=st.top();
                st.pop();
            }
            st.push(temp);
            res=min(res,temp+i);
        }
        cout<<res<<endl;
    }
}