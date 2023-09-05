#include<iostream>
using namespace std;
//1,1,2,3,5,8,13,...
int fibo(int n){ //2
	//int fibonaci[n]={1,1}; //5
	int fibonaci[];
	fibonaci[0]=1;
	fibonaci[1]=1;
	//5
	
	//5+2+(n-2)*5+1+2 = 5n
	long long a = 1;
	long long b = 1;
	long long c;
	//5
//	for(int i=3;i<=n;i++){
	int i=3;
	//2
	for(;i<=n;){//n-2
		c=a+b;
		a=b;
		b=c;
		i++;
		//5
	}//break = 1
	return c;//2
	
	
}


main(){
	cout<<fibo(5);
}
