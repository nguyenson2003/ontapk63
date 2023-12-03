#include <bits/stdc++.h>
using namespace std;

void blowUp(int a[], int child){
	int parent = (child-1)/2;
	if(child>0 && a[child]>a[parent]){
		swap(a[child],a[parent]);
		blowUp(a,parent);
	}
}

void sinkDown(int a[],int n,int parent){
	int child1 = parent*2+1;
	int child2 = parent*2+2;
	if(child1>=n)return;
	if(child2>=n || a[child1]>a[child2]){
		if(a[parent]<a[child1]){
			swap(a[parent],a[child1]);
			sinkDown(a,n,child1);
		}
	}else{
		if(a[parent]<a[child2]){
			swap(a[parent],a[child2]);
			sinkDown(a,n,child2);
		}
	}
}

void heapSort(int a[],int n){
	for(int i = 1;i<n;i++){
		blowUp(a,i);
	}
	for(int i = n-1;i>=0;i--){
		swap(a[0],a[i]);
		sinkDown(a,i,0);
	}
}

main(){
	int n = 8;
	int a[]  = {10,3,24,1,4,21,54,5};
	heapSort(a,n);
	for(int x:a)cout<<x<<' ';
}

//3 1 5 8 2











