#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

main(){
	vector<string> danh_sach_lop;
	danh_sach_lop.push_back("Vang Vu Trang");
	danh_sach_lop.push_back("Phan Thuy Linh");
	danh_sach_lop.push_back("Tran Kim Anh");
	danh_sach_lop.push_back("Truong Van Minh");
	danh_sach_lop.push_back("Le Xuan Bao Anh");
	danh_sach_lop.push_back("Trinh Manh Quang");
	danh_sach_lop.push_back("Dao Tuan Anh");
	danh_sach_lop.push_back("Nguyen Quynh Son");
	danh_sach_lop.push_back("Le Dang Son");
	danh_sach_lop.push_back("Tran Tien Dung");
	danh_sach_lop.push_back("Nguyen Dinh Tuan Anh");
	danh_sach_lop.push_back("Nguyen Manh Hung");
	danh_sach_lop.push_back("Pham Dinh Dung");
	danh_sach_lop.push_back("Nguyen Duc Manh");
	danh_sach_lop.push_back("Bui Thanh Phu");
	danh_sach_lop.push_back("Le Thanh Huyen");
	danh_sach_lop.push_back("Pham Thi Thuong");
	danh_sach_lop.push_back("Trieu Linh Chi");
	for(string name:danh_sach_lop){
		cout<<name<<'\n';
	}
	cout<<"lop co so nguoi la: "<<danh_sach_lop.size();
	if(danh_sach_lop.empty())
		cout<<"\nGiai tan\n";
	else
		cout<<"\nBuoi sau lop di hoc\n";
	sort(danh_sach_lop.begin(),danh_sach_lop.end());
	for(int i=0;i<danh_sach_lop.size();i++)
		cout<<danh_sach_lop[i]<<'\n';
	for(string name:danh_sach_lop){
		cout<<name<<'\n';
	}
	
	
	
	
	
	
	
}


