//0
// x la stn neu x-1 la stn

//fibo(n)=fibo(n-1)+fibo(n-2)
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int fibo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1; 
	return fibo(n-1)+fibo(n-2);
}

int ucln(int a,int b){
	if(a*b==0) return a+b;
	return ucln(b,a%b); 
}

int main(){
	for(int i=0;i<=8;i++)
		cout<<fibo(i)<<'\n';
	
	
	
	
}
