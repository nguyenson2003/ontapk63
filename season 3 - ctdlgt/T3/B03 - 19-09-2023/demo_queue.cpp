#include <iostream>
#include <queue>
#include <string>
using namespace std;

main(){
	queue<string> ds_nhac;
	ds_nhac.push("a loi - double2t");
	ds_nhac.push("nang am xa dan");
	ds_nhac.push("lac troi");
	cout<<"bai hat dang phat: "<<ds_nhac.front()<<endl;
	cout<<"so luong bai hat trong danh sach: "<<ds_nhac.size()<<endl;
	ds_nhac.pop();
	if(ds_nhac.empty()){
		cout<<"het bai hat roi, can them bai moi";
	}else{
		cout<<"van con nhac";
	}
	cout<<endl;
	
}
