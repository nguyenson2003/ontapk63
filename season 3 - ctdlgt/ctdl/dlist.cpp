#include<bits/stdc++.h>
using namespace std;
#ifndef __my__dlist__cpp__
#define __my__dlist__cpp__
template <class T>
struct node
{
	T elem;
	node*prev,*next;
	node(T e,node*P=0,node*N=0){elem=e;prev=P;next=N;} //ham hao
};
template <class T>
class dlist_ite    //bo lap xuoi
{
	public:
		node<T>*curr;      //quan ly node hien thoi
		dlist_ite(node<T>*c=0) {curr=c;}  //ham tao
		bool operator!=(dlist_ite<T> it1) {return curr!=it1.curr;}
		T &operator*() {return curr->elem;}
		dlist_ite<T> operator++()  //++it
		{
			curr=curr->next;
			return curr;
		}
		dlist_ite<T> operator++(int)  //it++
		{
			node<T> *p=curr;
			curr=curr->next;
			return p;
		}
};

template <class T>
class dlist_rite    //bo lap nguoc
{
	public:
		node<T>*curr;      //quan ly node hien thoi
		dlist_rite(node<T>*c=0) {curr=c;}  //ham tao
		bool operator!=(dlist_rite<T> it1) {return curr!=it1.curr;}
		T &operator*() {return curr->elem;}
		dlist_rite<T> operator++()  //++it
		{
			curr=curr->prev;
			return curr;
		}
		dlist_rite<T> operator++(int)  //it++
		{
			node<T> *p=curr;
			curr=curr->prev;
			return p;
		}
};

template <class T>
class dlist
{
	node<T>*Head,*Trail;
	int n;
	public:
		dlist(){n=0;Head=Trail=0;}  //tao ds rong
		dlist(dlist<T> &L1)  //toan tu copy
		{
			n=0;Head=Trail=0;
			for(auto x:L1) push_back(x);
		}
		dlist(int k,T x)
		{
			n=0; Head=Trail=0;
			while(k--) push_back(x);
		}
		~dlist()
		{
			while(Head) {node<T>*p=Head; Head=p->next; delete p;}
		}
		int size() {return n;}
		bool empty() {return n==0;}
		T &front(){return Head->elem;}
		T &back(){return Trail->elem;}
		void push_back(T x)
		{
			if(n==0) Head=Trail=new node<T>(x);
			else Trail=Trail->next=new node<T>(x,Trail,0);
			n++;
		}
		void push_front(T x)
		{
			if(n==0) Head=Trail=new node<T>(x);
			else Head=Head->prev=new node<T>(x,0,Head);
			n++;
		}
		void pop_back()
		{
			if(n==1) {delete Head; Head=Trail=0;}
			else
			{
				Trail=Trail->prev;
				delete Trail->next;
				Trail->next=0;
			}
			n--;
		}
		void pop_front()
		{
			if(n==1) {delete Head; Head=Trail=0;}
			else
			{
				Head=Head->next;
				delete Head->prev;
				Head->prev=0;
			}
			n--;
		}
		typedef dlist_ite<T> iterator;
		iterator begin() {return Head;}
		iterator end() {return NULL;}
		
		typedef dlist_rite<T> reverse_iterator;
		reverse_iterator rbegin() {return Trail;}
		reverse_iterator rend() {return NULL;}
		
		void insert(iterator it,T x)  //chen x vao vi tri bo lap it
		{
			node<T>*p=it.curr;
			if(p==Head) return push_front(x);
			node<T>*q=p->prev;
			q->next=p->prev=new node<T>(x,q,p);
			n++;
		}
		void erase(iterator it)
		{
			node<T>*p=it.curr;
			if(p==Head) return pop_front();
			if(p==Trail) return pop_back();
			node<T>*q=p->prev,*r=p->next;
			q->next=r;
			r->prev=q;
			delete p;
			n--;
		}
		void sort(bool ok=true)
		{
			for(node<T>*p=Head;p!=NULL;p=p->next)
			for(node<T>*q=p->next;q!=NULL;q=q->next)
			if(q->elem<p->elem) swap(p->elem,q->elem);
		}
};
#endif
//
//int main()
//{
//	dlist<int> L(3,7);
//	for(auto x:{423,526,25,33,65,64,54,535,62,764,621}) x%2?L.push_front(x):L.push_back(x);
//	cout<<"\nL xuoi  : "; //for(auto x:L) cout<<x<<" ";  //duyet theo bo lap xuoi
//	for(dlist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
//	cout<<"\nL nguoc : ";
//	for(dlist<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" ";
//	L.sort(); 
//	cout<<"\nL xuoi  : "; for(auto x:L) cout<<x<<" ";
//	L.insert(L.begin(),10);
//	auto it=L.begin(); it++;it++;it++;
//	L.insert(it,20);
//	cout<<"\nL xuoi  : "; for(auto x:L) cout<<x<<" ";
//	L.erase(L.begin());
//	it=L.begin();
//	for(int i=1;i<L.size();i++) it++; 
//	L.erase(it);  //xoa phan tu cuoi
//	it=L.begin();
//	for(int i=1;i<5;i++) it++; 
//	L.erase(it); 
//	cout<<"\nL xuoi  : "; for(auto x:L) cout<<x<<" ";
//	
//}
//

