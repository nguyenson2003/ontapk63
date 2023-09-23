#include <bits/stdc++.h>

using namespace std;
int main(){
	long long x,temp;
	cin>>x;
	temp=x;
	long long n=1,hs=2;
	while(true){
		while(x%2==0){
			x/=2;
			hs*=2;
		}
		if(x==1)
			break;
		if(x%2!=0){
			x/=2;
			n+=hs;
			hs*=2;
		}
	}
	cout<<n;
	cout<<(x-(int)pow(2,(int)log2(x)))*2+1;
}
