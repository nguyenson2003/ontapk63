#include<iostream>
using namespace std;

template <class T>
class Node{
	int size=0;
	Node<T>* left = NULL;
	Node<T>* right = NULL;
	T value=NULL;
	public:
		Node(){}
		Node(T x){
			value=x;
			size=1;
		}
		void push(T x){
			if(size==0){
				value=x;
			}else{
				if(x<value){
					if(left==NULL)left = new Node<T>(x);
					else left->push(x);
				}
				if(x>value){
					if(right==NULL)right = new Node<T>(x);
					else right->push(x);
				}
			}
			size++;
		}
		void print(){
			if(left!=NULL) left->print();
			cout<<value<<" ";
			if(right!=NULL) right->print();
		}
};
main(){
	Node<int> tr;
	tr.push(10);
	tr.push(23);
	tr.push(2);
	tr.push(13);
	tr.print();
}





