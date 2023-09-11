//cai dat stack bang mang
#include<bits/stdc++.h>
using namespace std;
#ifndef __stack__cpp__
#define __stack__cpp__
template <class T>
class Stack
{
	T *buf; 
	int n,cap;  //n-size; cap-capacity
	public:
		Stack() {n=cap=0; buf=NULL;}
		~Stack(){if(buf) delete[]buf;}
		int size() {return n;}
		bool empty() {return n==0;}
		void pop() {n--;}
		T &top(){return buf[n-1];}
		void push(T x)
		{
			if(n==cap)
			{
				cap=cap*2+1;  //cap=cap?cap*2:1;
				T *tem=new T[cap];
				for(int i=0;i<n;i++) tem[i]=buf[i];
				if(buf) delete[]buf;
				buf=tem;
			}
			buf[n++]=x;
		}
};
#endif
//int main()
//{
//	Stack<int> S;
//	for(int x:{4,7,2,8,1,6}) S.push(x);
//	S.top()=9;  //thay doi gia tri top
//	cout<<"\nDinh : "<<S.top(); 
//	cout<<"\nKich thuoc : "<<S.size(); 
//	cout<<"\nlay ra lan luot : ";
//	while(not S.empty())
//	{
//		cout<<S.top()<<" ";
//		S.pop();
//	}
//}


