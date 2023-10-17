#include<iostream>
using namespace std;

template <class T>
class Node{
	public:
		T value;
		Node<T>* next;
		Node<T>* prev;
		Node(T x=NULL,Node<T>* N=NULL){
			value = x;next=N;
		}
};

template <class T>
class myList{
	Node<T>* head = NULL;
	Node<T>* tail = NULL;
	int n=0;
	public:
		void push(T x){
			Node<T>* temp = new Node<T>(x);
			if(n==0){
				head=tail=temp;
			}else{
				tail->next = temp;
				tail=temp;
			}
			n++;
		}
		void pop(){
			if(n==0)return;
			if(n==1){
				head=tail=NULL;
				n--;
				return;
			}
			Node<T>* it = head;
			while (it->next!=tail){
				//x=x+1     //gan x  la so tiep theo cua x
				it=it->next;//gan it la nguoi tiep theo cua it
			}
			it->next=NULL;
			tail=it;
			n--;
		}
		int size(){
			return n;
		}
		void print(){
			Node<T>* it=head;
			while(it!=NULL){
				cout<<it->value<<" ";
				it=it->next;
			}
		}
};

main(){
	myList<int> a;
	a.push(1);
	a.push(10);
	a.push(21);
	a.pop();
	a.print();
}
