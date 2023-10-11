//cai dat vector by tichpx 25_10_2022
#include<bits/stdc++.h>
using namespace std;
#ifndef __my_vector_cpp__
#define __my_vector_cpp__
//Cai dat bo lap nguoc cho Vector
template <class T>
class vec_rit
{
	T*cur;   //vi tri tro hien thoi
	public:
		vec_rit<T>(T*c=NULL) {cur=c;}  //ham tao
		vec_rit<T> &operator=(vec_rit<T> rit) 
		{
			this->cur=rit.cur;
			return *this;
		}
		bool operator!=(vec_rit<T> rit) {return cur!=rit.cur;}
		T& operator*() {return *cur;}
		vec_rit<T> operator++()  //++it
		{
			cur=cur-1;
			return cur;
		}
		vec_rit<T> operator++(int)  //it++
		{
			T*c=cur;
			cur=cur-1;
			return c;
		}
};

template <class T>
class Vector
{
	int n,cap;  //size and capacity
	T *buf;
	private :
		void recap(int newcap)
		{
			cap=newcap;
			T *tem=buf;
			buf=new T[cap];
			for(int i=0;i<n;i++) buf[i]=tem[i];
			if(tem) delete[]tem;
		}
	public:
		Vector() {n=cap=0; buf=NULL;}
		Vector(int k,T x)//tao k ptu deu = x
		{
			n=cap=k;
			buf=new T[k];
			for(int i=0;i<n;i++) buf[i]=x;
		}
		Vector(Vector<T> &V) //toan tu copy
		{
			//cout<<"\nCopy vector ";
			this->n=V.n;
			this->cap=V.cap;
			this->buf=new T[cap];
			for(int i=0;i<V.n;i++) this->buf[i]=V.buf[i];
		}
		Vector<T> &operator=(Vector<T> &V) //toan tu copy
		{
			//cout<<"\nAssign vector ";
			this->n=V.n;
			this->cap=V.cap;
			if(this->buf) delete[]this->buf;
			this->buf=new T[cap];
			for(int i=0;i<V.n;i++) this->buf[i]=V.buf[i];
			return *this;
		}
		~Vector() {if(buf) delete buf;}
		int size() {return n;}
		int capacity() {return cap;}
		bool empty() {return n==0;}
		T &front() {return buf[0];}
		T &back() {return buf[n-1];}
		T &operator[](int k) {return buf[k];}
		void pop_back() {n--;}
		void push_back(T x)
		{
			if(n==cap) recap(cap?cap*2:1);
			buf[n++]=x;
		}
		void resize(int newsize,T x)
		{
			if(newsize<=n) {n=newsize; return;}
			if(cap<newsize) recap(newsize);
			for(int i=n;i<newsize;i++) buf[i]=x;
			n=newsize;
		}
		typedef T* iterator;
		iterator begin() {return buf;}
		iterator end() {return buf+n;}
		typedef vec_rit<T> reverse_iterator;
		reverse_iterator rbegin() {return buf+n-1;}
		reverse_iterator rend() {return buf-1;}
		void insert(iterator &it,T x)
		{
			if(n==cap) 
			{
				int k=it-buf;
				recap(cap?cap*2:1);
				it=buf+k; 	
			}
			for(iterator it1=buf+n-1;it1>=it;it1--) *(it1+1)=*it1;
			*it=x;
			n++;
		}
		void erase(iterator it)
		{
			for(iterator it1=it+1;it1<buf+n;it1++) *(it1-1)=*it1;
			n--;
		}
};
#endif
//int main()
//{
//	Vector<int> A(4,3);
//	A.front()=7;
//	cout<<A.front()<<"\n";
//	cout<<"\nA : "; for(int i=0;i<A.size();i++) cout<<A[i]<<" ";
//	for(auto x:{523,52,246,26})A.push_back(x);
//	cout<<"\nA : "; for(int i=0;i<A.size();i++) cout<<A[i]<<" ";
//	A.resize(13,-2);
//	cout<<"\nA : "; for(int i=0;i<A.size();i++) cout<<A[i]<<" ";
//	cout<<"\nDuyet xuoi : "; for(Vector<int>::iterator it=A.begin();it!=A.end();it++) cout<<*it<<" ";
//	cout<<"\nDuyet xuoi : "; for(auto x:A) cout<<x<<" ";
//	sort(A.begin(),A.end(),greater<int> ());
//	cout<<"\nDuyet xuoi : "; for(auto x:A) cout<<x<<" ";
//	auto it=A.begin(); it+=7;
//	A.insert(it,-5);
//	cout<<"\nDuyet xuoi : "; for(auto x:A) cout<<x<<" ";
//	it=A.begin(); it+=2;
//	A.erase(it);
//	cout<<"\nA : "; for(int x:A) cout<<x<<" ";
//	Vector<int> B=A;  //toan tu copy
//	cout<<"\nB : "; for(auto x:B) cout<<x<<" ";	
//	Vector<int> C;
//	C=A;    //toan tu gan = 
//	cout<<"\nC : "; for(auto x:C) cout<<x<<" ";	
//	cout<<"\nDuyet nguoc : ";
//	for(Vector<int>::reverse_iterator it=A.rbegin();it!=A.rend();it++) cout<<*it<<" ";
//}


