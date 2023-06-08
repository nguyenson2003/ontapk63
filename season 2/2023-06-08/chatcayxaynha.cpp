#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int wood(int a[],int h){
	int s = 0;
	for(int i=0;i<n;i++) if(a[i]>h) s+=a[i]-h;
	return s;
}
int bin_search(int a[],int l,int r,int h){
	if(l==r)return l;
	int mid=(l+r)/2;
	if(wood(a,mid)<h) return bin_search(a,l,mid,h);
	else return bin_search(a,mid+1,r,h);
}
main(){
	int h;
	cin>>n>>h;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<bin_search(a,0,1000000000,h)-1;
}