#include<iostream>
#include <stack>
#include<string>
using namespace std;
main(){
	string str;
	cin>>str;
	stack<char>chuaCoCap;
	for(int i=0;i<str.size();i++){
		if(str[i]== '(' || str[i]=='[' || str[i]=='{'){
			chuaCoCap.push(str[i]);
		}else{
			if(chuaCoCap.empty()){
				cout<<"xau ngoac khong hop le";
				return 0;
			}
			if(str[i]==')' && chuaCoCap.top() == '('){
				chuaCoCap.pop();
			}else if(str[i]==']' && chuaCoCap.top() == '['){
				chuaCoCap.pop();
			}else if(str[i]=='}' && chuaCoCap.top() == '{'){
				chuaCoCap.pop();
			}else{
				cout<<"xau ngoac khong hop le";
				return 0;
			}
			
		}
	}
	if(chuaCoCap.empty()){
		cout<<"xau ngoac hop le";
	}else {
		cout<<"xau ngoac khong hop le";
	}
	//()[{(){}}]
}
