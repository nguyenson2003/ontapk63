#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,sum=0;
int a[100];
int backtrack(int nguoi1,int step){
	if(step==n)return abs(sum - nguoi1 - nguoi1);
	return min(backtrack(nguoi1+a[step],step+1),backtrack(nguoi1,step+1));
}
main(){
	n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];sum+=a[i];
	}
	cout<<backtrack(0,0);
}