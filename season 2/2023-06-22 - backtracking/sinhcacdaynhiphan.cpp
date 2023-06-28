#include<bits/stdc++.h>
using namespace std;
void backtrack(string str,int n){
	if(str.size()==n){
		cout<<str<<endl;
		return;
	}
	backtrack(str+'0',n);
	backtrack(str+'1',n);
}
main(){
	int n;cin>>n;
	backtrack("",n);
}