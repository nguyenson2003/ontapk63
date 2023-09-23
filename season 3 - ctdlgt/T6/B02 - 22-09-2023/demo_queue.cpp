#include<iostream>
#include<queue>
#include<string>
using namespace std;

main(){
	queue<string> ds_bai_hat;
	ds_bai_hat.push("lac troi");
	ds_bai_hat.push("nang am xa dan");
	ds_bai_hat.push("chay ngay di");
	cout<<"bai hat dang phat: "<<ds_bai_hat.front()<<"\n";
	cout<<"bai hat dang phat: "<<ds_bai_hat.front()<<"\n";
	ds_bai_hat.pop();
	cout<<"bai hat dang phat: "<<ds_bai_hat.front()<<"\n";
	cout<<"dang co "<<ds_bai_hat.size()<<" trong danh sach\n";
	if(ds_bai_hat.empty()){
		cout<<"het bai hat trong danh sach\n";
	}else{
		cout<<"van con bai hat\n";
	}
	
	
	
	
	
	
}


