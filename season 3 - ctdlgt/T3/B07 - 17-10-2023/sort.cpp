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


mergeSort(int a[],int from,int to){
	if(to-from==0) return;
	int mid = (from+to)/2; //chia doi
	mergeSort(a,from,mid); //sap xep phan ben trai
	mergeSort(a,mid+1,to); //sap xep phan ben phai
	
	int b[to-from+1];
	
	int i = from, j = mid+1,k=0;
	for(;i<=mid && j<=to;k++){
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


main(){
	int n = 5;
	int a[]  = {5,3,1,8,2};
	mergeSort(n,a);
	for(int x:a)cout<<x<<' ';
}











