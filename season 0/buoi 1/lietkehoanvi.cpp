//vector, map, set, dequeue, prioperty_queue
//[1,2,3,5,7]
//đệ quy, quay lui, tham lam, chia để trị, quy hoạch động
#include <bits/stdc++.h>
using namespace std;
bool check[10]={};
int n;
void backtrack(int i, int value){
    if(i==n){
        cout<<value<<endl;
        return;
    }
    for(int j=1;j<=n;j++){
        if(check[j]) continue;
        check[j]=true;
        backtrack(i+1,value*10+j);
        check[j]=false;
    }
}
int main()
{
    cin>>n;
    backtrack(0,0);
    /* code */
    return 0;
}
