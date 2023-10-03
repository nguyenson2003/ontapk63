//cai dat queue bang mang
#include<bits/stdc++.h>
using namespace std;
#ifndef __queue__cpp__
#define __queue__cpp__

template <class T>
class Queue
{
	int n,cap,F,L;  //luu tren mang buf[0...cap-1] du lieu buf[F]->buf[L-1]
	T*buf;
	public:
		Queue() {n=cap=0;buf=NULL;}
		~Queue() {if(buf) delete []buf;} 
		int size() {return n;}
		bool empty() {return n==0;}
		T &front() {return buf[F];}
		T &back() {return L!=0?buf[L-1]:buf[cap-1];}
		void pop() {F=(F+1)%cap; n--;}
		void push(T x)
		{
			if(n==cap) //mang da chua day cac phan tu
			{
				cap=cap*2+1;
				T *tem=new T[cap];
				int j=0;
				for(int i=F;i<n;i++) tem[j++]=buf[i];
				for(int i=0;i<F;i++) tem[j++]=buf[i];
//				for(int i=F,j=0;j<n	;i++,j++) 
//					tem[j]=buf[i%n];
				F=0;L=n;
				if(buf) delete[]buf;
				buf=tem;
			}
			buf[L]=x;
//			L=(L+1)%cap;
			L=L+1; if(L==cap) L=0;
			n++;
		}
};
#endif
//int main()
//{
//	Queue<int> Q;
//	for(int x:{3526,52,6,72537,735,36,845}) Q.push(x);
//	int a = Q.front();
//	Q.front()=10;
//	while(Q.size())	{cout<<Q.front()<<" ";	Q.pop();}
//}
//

