#include<iostream>
#include "stack.cpp"
#include<string>
using namespace std;
main(){
	stack<string> loCSui;
	loCSui.push("do");
	loCSui.push("cam");
	loCSui.push("vang");
	cout<<"Vien C sui tren cung co mau: "<<loCSui.top()<<endl;
	loCSui.pop();
	cout<<"Sau khi lay ra, lo C sui con so vien la: "<<loCSui.size()<<endl;
	if(loCSui.empty()){
		cout<<"Het C sui, can mua lo moi"<<endl;
	}else{
		cout<<"Con C sui trong lo"<<endl;
	}
}



