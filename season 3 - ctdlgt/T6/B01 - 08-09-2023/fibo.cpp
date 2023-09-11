#include<iostream>
using namespace std;

//int sum(int a,int b, int c){
//	
//	//1
//	//+-*/% 
//	//++,--
//	//=
//	//>,<,>=,<=,==,!=,!
//	//a[10]
//	//int, long, long long, float,....
//	//int[]
//	//return
//	//break
//	for(;;){
//		
//	}
//	if(1+2<a){
//	} else if(1<2){
//		
//	}else{
//	}
//	int c = 147;
//	a=b+13;
//	return a + b - c % 12 *21;//4
//	
//	//+= -> +, =
//}

int fibo(int n){//2
	//int daySo[n+2]={0,1};
	int daySo[n+2];
	daySo[0]=0;
	daySo[1]=1;
	//6
	
	
//	for(int i=2;i<=n;i++){
	int i = 2;//2
	for(;i<=n;){//9*(n-1)
	//1

		daySo[i]=daySo[i-1] + daySo[i-2];//7
		i++;//1
	}//break;  1
	return daySo[n];//2
}
// 2+6+2+9*(n-1) + 1 + 2 = 9n + 4
main(){
	cout<<fibo(6);
}




