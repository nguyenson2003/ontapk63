#include <bits/stdc++.h>
using namespace std;

template<class T>
class myTree{
	class Node{
		public:
			T value;
			Node* left=NULL;
			Node* right=NULL;
			Node(T x = 0){
				value = x;
			}
			void put(T x){
				if(x<=value){
					if(left==NULL) left = new Node(x);
					else left->put(x);
				}else if(x>value){
					if(right==NULL) right = new Node(x);
					else right->put(x);
				}
			}
			void print(){
				if(left!=NULL) left->print();
				cout<<value<<" ";
				if(right!=NULL) right->print();
			}
	};
	Node* root=0;
	int n=0;
	public:
		void put(T x){
			if(n==0){
				root = new Node(x);
				n++;
			}else{
				root->put(x);
				n++;
			}
		}
		void print(){
			if(n==0){
				return;
			}else{
				root->print();
			}
		}
};

main(){
	myTree<int>* tr = new myTree<int>();
	tr->put(3);
	tr->put(2);
	tr->put(4);
	tr->put(10);
	tr->put(3);
	tr->put(0);
	tr->print();
	cout<<endl;
	tr->put(5);
	tr->print();
}











