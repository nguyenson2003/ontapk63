#include <iostream>
#include <stack>
#include <string>
using namespace std;


main(){
	stack<int> sk;
	stack<string> loCSui;
	loCSui.push("cam");
	loCSui.push("do");
	loCSui.push("vang");
	cout<<loCSui.size()<<endl;//3
	cout<<loCSui.top()<<endl;//vang
	loCSui.pop();//mat 1 vien tren cung cua lo
	cout<<loCSui.size()<<endl;//2
	if(loCSui.empty()){
		cout<<"het C sui roi";
	}else{
		cout<<"van con C sui";
	}
	cout<<endl;
	
	
	
	
}

