#include <iostream>
#include <vector>
#include <string>
using namespace std;
//-std=c++11
main(){
	vector<string> ds_lop;
	ds_lop.push_back("nguyen quynh son");
	ds_lop.push_back("le thi thao");
	ds_lop.push_back("ngo thi quynh mai");
	ds_lop.push_back("nguyen trong ha");
	ds_lop.push_back("nguyen tuan hung");
	ds_lop.push_back("phung the anh");
	ds_lop.push_back("dao manh tung");
	ds_lop.push_back("trinh ngoc kien");
	cout<<"si so: "<<ds_lop.size()<<endl;
	ds_lop[0]="son trau";
	cout<<ds_lop[3]<<" dung day tra loi"<<endl;
	if(ds_lop.empty()){
		cout<<"giai tan lop"<<endl;
	}else{
		cout<<"buoi sau hoc tiep"<<endl<<endl;
	}
	cout<<"danh sach lop:"<<endl;
//	for(int i=0;i<ds_lop.size();i++){
//		cout<<ds_lop[i]<<endl;
//	}
	for(string hoc_sinh:ds_lop){
		cout<<hoc_sinh<<endl;
	}
	
	cout<<endl;
	cout<<"moi ban nhap ho ten nguoi muon xoa: ";
	string ten_hs_can_xoa;
	getline(cin,ten_hs_can_xoa);
	for(int i=0;i<ds_lop.size();i++){
		if(ds_lop[i]==ten_hs_can_xoa){
			ds_lop.erase(ds_lop.begin()+i);
		}
	}
	
	cout<<"danh sach lop:"<<endl;
	for(string hoc_sinh:ds_lop){
		cout<<hoc_sinh<<endl;
	}
	
	
	
}
