#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

vector<int> graph[limit];
int dfs(int u,bool visit[]){
    int res = 1;
    for(int x:graph[u]) {
        if(visit[x])continue; 
        visit[x]=true; 
        res+= dfs(x,visit);
    }
    return res;
}

keqing(){
    int n,m;cin>>n>>m;
    bool visit[n]={};
    while(m--){
        int a,b;cin>>a>>b;
        a--;b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int res[n]={};
    int count = 0;
    for(int i=0;i<n;i++){
        if(visit[i])continue;
        count++;
        visit[i]=true;
        res[i]=dfs(i,visit);
    }
    int ans = 0;
    for(int x:res)ans=max(ans,x);
    cout<<count<<endl<<ans<<endl;
}