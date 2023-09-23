#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<int> bo_bai;
	for(int i=0,card;i<n;i++){
		cin>>card;
		bo_bai.push(card);
	}
	
	while(!bo_bai.empty()){
		//step 1
		int la_duoi_day=bo_bai.front();
		bo_bai.pop();
		bo_bai.push(la_duoi_day);
		//step 2
		la_duoi_day=bo_bai.front();
		cout<<la_duoi_day<<' ';
		bo_bai.pop();
			
	}
	
	
	
}

