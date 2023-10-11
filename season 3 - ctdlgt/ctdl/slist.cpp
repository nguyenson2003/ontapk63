#include<bits/stdc++.h>
using namespace std;
#ifndef  __my__slist__cpp__
#define  __my__slist__cpp__
template <class T>
struct node
{
	T elem;
	node *next;
	node(T e,node *N=NULL) {elem=e; next=N;}
};
template <class T>
class slist_ite    //bo lap xuoi
{
	public:
		node<T>*curr;      //quan ly node hien thoi
		slist_ite(node<T>*c=0) {curr=c;}  //ham tao
		bool operator!=(slist_ite<T> it1) {return curr!=it1.curr;}
		T &operator*() {return curr->elem;}
		slist_ite<T> operator++()  //++it
		{
			curr=curr->next;
			return curr;
		}
		slist_ite<T> operator++(int)  //it++
		{
			node<T> *p=curr;
			curr=curr->next;
			return p;
		}
};
template <class T>
class slist        //single list
{
	node<T> *Head,*Trail; //hai con tro quan ly 2 dau
	int n;    //size
	public:
		slist() {n=0; Head=Trail=NULL;}
		slist(slist<T> &L1)  //toan tu copy
		{
			//cout<<"copy";
			n=0;Head=Trail=0;
			for(auto x:L1) push_back(x);
		}
		slist(int k,T x)
		{
			n=0;Head=Trail=0;
			while(k--) push_back(x);
		}
		~slist() 
		{
			while(Head)
			{
				node<T> *p=Head;
				Head=Head->next;
				delete p;
			}
		}
		bool empty() {return n==0;}
		int size() {return n;}
		T &front() {return Head->elem;}
		T &back() {return Trail->elem;}
		void push_front(T x)
		{
			if(n==0) Head=Trail=new node<T>(x);
			else Head=new node<T>(x,Head); 
			n++;
		}
		void push_back(T x)
		{
			if(n==0) Head=Trail=new node<T>(x);
			else Trail=Trail->next = new node<T>(x);
			n++; 
		}
		T& operator[](int k)
		{
			node<T>*p=Head;
			while(k--) p=p->next;
			return p->elem;
		}
		void pop_front()
		{
			if(n==1) {delete Head; Head=Trail=NULL;}
			else
			{
				node<T>*p=Head;
				Head=p->next;
				delete p;
			}
			n--;
		}
		void pop_back()
		{
			if(n==1) {delete Head; Head=Trail=NULL;}
			else
			{
				node<T>*p=Head; while (p->next!=Trail) p=p->next;
				delete Trail;
				Trail=p;
				Trail->next=NULL;
			}
			n--;
		}
		typedef slist_ite<T> iterator;
		iterator begin() {return Head;}
		iterator end() {return NULL;}
		void insert(iterator it,T x)  //chen x vao vi tri bo lap it
		{
			node<T>*p=it.curr;
			if(p==Head) return push_front(x);
			p->next=new node<T>(p->elem,p->next);
			p->elem=x;
			n++;
		}
		void erase(iterator it)
		{
			node<T>*p=it.curr;
			if(p==Head) return pop_front();
			if(p==Trail) return pop_back();
			node<T>*q=Head; while(q->next!=p) q=q->next;
			q->next=p->next;
			delete p;
			n--;
		}
		void sort(bool ok=true)
		{
			for(node<T>*p=Head;p!=NULL;p=p->next)
			for(node<T>*q=p->next;q!=NULL;q=q->next)
			if(q->elem<p->elem) 
			swap(p->elem,q->elem);
		}
};
#endif
//int main()
//{
//	slist<int> L;
//	for(int x:{43,525,25,52,21,626,757,66,54,637}) if(x%2==0) L.push_front(x); else L.push_back(x);
//	cout<<"\nL : "; for(int i=0;i<L.size();i++) cout<<L[i]<<" ";
//	L.pop_back();
//	L.pop_back();
//	L.pop_front();
//	L.pop_front();
//	cout<<"\nL : "; for(int i=0;i<L.size();i++) cout<<L[i]<<" ";
//	cout<<"\nL xuoi : "; 
//	//for(slist<int>::iterator it=L.begin();it!=L.end();++it) cout<<*it<<" ";
//	for(auto x:L) cout<<x<<" ";
//	slist<int> L1=L;   //toan tu copy
//	cout<<"\nL1 : ";for(auto x:L1) cout<<x<<" ";
//	slist<int> L2(5,3);
//	cout<<"\nL2 : ";for(auto x:L2) cout<<x<<" ";
//	slist<int>::iterator it=L.begin();
//	for(int i=1;i<=4;i++) it++;
//	L.insert(it,-5);
//	L.insert(L.begin(),555);
//	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
//	it=L.begin();
//	for(int i=1;i<=4;i++) it++;
//	L.erase(it);
//	L.erase(L.begin());
//	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
//	L.sort(false);
//	cout<<"\nL : "; for(auto x:L) cout<<x<<" ";
//	
//}
//

