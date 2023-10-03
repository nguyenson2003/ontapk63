#include<iostream>
using namespace std;

int fibo(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return fibo(n-1)+fibo(n-2);
}

int poww(int a,int b){
	if(b==0)
		return 1;
	return a*poww(a,b-1);
	//a^b=(a^(b/2))^2 * a^(b%2)
}

int main(){
	for(int i=0;i<=8;i++)
	cout<<fibo(i)<<' ';
	
	int
}
