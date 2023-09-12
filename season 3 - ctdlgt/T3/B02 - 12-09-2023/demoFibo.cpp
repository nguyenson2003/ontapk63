#include <iostream>
#include <stack>
#include <string>
using namespace std;

int fibo(int n){
	if(n==1) return 0;// fibo_1  = 0
	if(n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}
main(){
	cout<<fibo(7);
}
