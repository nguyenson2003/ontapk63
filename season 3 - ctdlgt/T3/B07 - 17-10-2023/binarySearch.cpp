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

//ham de quy
int binarySearch(int a[], int from, int to, int x){
	if(from==to && a[from]!=x)return -1;
	int mid = (from+to)/2;
	if(a[mid]<x) return binarySearch(a,mid+1,to,x);
	if(a[mid]>x) return binarySearch(a,from,mid,x);
	return mid;
}
int binarySearch(int a[],int n,int x){
	int from=0,to=n-1;
	while(from<to){
		int mid = (from+to)/2;
		if(a[mid]<x) from=mid+1;
		else to=mid;
	}
	if(from==to && a[from]!=x)from=to=-1;
	return from;
}
main(){
	int n = 8;
	int a[]  = {10,3,24,1,4,21,54,5};
	heapSort(a,n);
	for(int x:a)cout<<x<<' ';
	cout<<endl;
	cout<<binarySearch(a,0,n-1,21)<<endl;
	cout<<binarySearch(a,0,n-1,5)<<endl;
	cout<<binarySearch(a,0,n-1,55)<<endl;
	cout<<binarySearch(a,0,n-1,1)<<endl;
	cout<<binarySearch(a,0,n-1,16)<<endl;
	//while
	cout<<binarySearch(a,n,3)<<endl;
	
}

//3 1 5 8 2











