#include <bits/stdc++.h>
using namespace std;

bubleSort(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
}
selectionSort(int n,int a[]){
	for(int i=0;i<n;i++){
		int index_min=i;
		int min=a[i];
		for(int j=i+1;j<n;j++){
			if(min>a[j]){
				min=a[j];index_min=j;
			}
		}
		swap(a[i],a[index_min]);
	}
}

insertedSort(int n,int a[]){
	for(int i=0;i<n;i++){
		for(int j=i;j>=0;j--){
			if(a[j]<a[j-1]){
				swap(a[j],a[j-1]);
			}else break;
		}
	}
}


void mergeSort(int a[],int from,int to){
	if(from>=to) return;
	int mid = (from+to)/2; //chia doi
	mergeSort(a,from,mid); //sap xep phan ben trai
	mergeSort(a,mid+1,to); //sap xep phan ben phai
	
	int b[to-from+1];
	
	int i = from, j = mid+1,k=0;
	for(;i<=mid || j<=to;k++){
		if(i>mid){
			b[k]=a[j];
			j++;
		}else if(j>to){
			b[k]=a[i];
			i++;
		}else if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}else{
			b[k]=a[j];
			j++;
		}
	}
	
	i=from,k=0;
	for(;i<=to ;i++,k++){
		a[i]=b[k];
	}
	
}

void quickSort(int a[],int from,int to){
	if(from>=to)return;
	
	
	int i = from;
	int j = to-1;
	while(i<j){
		while(a[i]<a[to])i++;
		while(a[j]>a[to])j--;
		if(i<j)
			swap(a[i],a[j]);
	}
	if(a[i]>a[to])
		swap(a[i],a[to]);
		
		
	quickSort(a,from,i-1);
	quickSort(a,i+1,to);
}

main(){
	int n = 8;
	int a[]  = {10,3,24,1,4,21,54,5};
	quickSort(a,0,n-1);
	for(int x:a)cout<<x<<' ';
}

//3 1 5 8 2











