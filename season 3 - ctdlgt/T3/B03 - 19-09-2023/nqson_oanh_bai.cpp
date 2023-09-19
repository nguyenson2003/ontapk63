#include <iostream>
#include <queue>
#include <string>
using namespace std;

main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	queue<int> bo_bai;
	for(int i=0;i<n;i++){
		bo_bai.push(a[i]);
	}
	while(!bo_bai.empty()){
		//step 1
		int la_duoi_day=bo_bai.front();
		bo_bai.pop();
		bo_bai.push(la_duoi_day);
		//step 2
		la_duoi_day=bo_bai.front();
		bo_bai.pop();
		cout<<la_duoi_day<<" ";
	}
}
