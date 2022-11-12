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
        string str;cin>>str;
        stack<int> st;
        for(char c:str){
            int temp=0;
            switch (c)
            {
            case 'C':
                st.push(12);
                break;
            case 'H':
                st.push(1);
                break;
            case 'O':
                st.push(16);
                break;
            case '(':
                st.push(0);
                break;
            case ')':
                temp=0;
                while(st.top()){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                st.push(temp);
                break;
            default:
                temp = st.top();
                st.pop();
                st.push(temp*(c-'0'));
                break;
            }
        }
        int res = 0;
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        cout<<res<<endl;
    }
}