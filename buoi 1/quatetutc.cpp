//vector, map, set, dequeue, stack, prioperty_queue, tree, custom ctdl
//đệ quy, quay lui, tham lam, chia để trị, quy hoạch động
//đồ bfs, dfs
//2 con trỏ

//icpc toàn nước -> kk
/*olp
siêu cúp
chuyên
ko chuyên 
cao đẳng
*/
#include <iostream>
#include <string>
using namespace std;
#define int long
#define long long long
#define mod 1000000007

main()
{
    string str;cin>>str;
    int n = str.size();
    int dp[n+1]={};
    if(str[0]=='0'){
        cout<<0;return 0;
    }
    dp[0]=1;
    for(int i=1;i<n;i++){
        if(str[i]=='0'){
            if(str[i-1]=='1' || str[i-1]=='2') dp[i]=i<2?1:dp[i-2];
            else{
                cout<<0;return 0;
            }
        }else if(str[i-1]=='1'){
            dp[i]=dp[i-1];
            dp[i]+= i<2?1:dp[i-2];
        }else if(str[i-1]=='2'){
            if(str[i]>='1' && str[i]<='6'){
                dp[i]=dp[i-1];
                dp[i]+= i<2?1:dp[i-2];
            }else{
                dp[i]=dp[i-1];
            }
        }else{
            dp[i]=dp[i-1];
        }
        dp[i]%=mod;
    }
    cout<<dp[n-1];
}
//4 1 > 4 2