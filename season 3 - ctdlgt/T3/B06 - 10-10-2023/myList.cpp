#include <bits/stdc++.h>
using namespace std;

template<class T>
class node{
	public:
	T value;
	node<T>* next;
	node(T x=NULL, node* N=NULL){
		value = x;
		next = N;
	}
};

template<class T>
class myList{
	node<T>* head=NULL;
	node<T>* tail=NULL;
	int n = 0;
	public:
		void push_back(T x){
			node<T>* temp= new node<T>(x);
			if(n==0){
				head = temp;
				tail = temp;
			}else{
				tail->next = temp;
				tail = temp;
			}
			n++;
		}
		void pop_back(){
			if(n==0) return;
			if(n==1){
				n=0;
				head=NULL;
				tail=NULL;
			}
			n--;
			node<T>* temp = head;
			while(temp->next != tail){
				temp = temp->next;
			}
			temp->next=NULL;
			tail = temp;
		}
		void print(){
			node<T>* temp = head;
			while(temp != NULL){
				cout<< temp->value<<" ";
				temp = temp->next;
			}
		}
		int size(){
			return n;
		}
};

main(){
	myList<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(10);
	a.push_back(15);
	a.pop_back();
	a.print();
}











