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
			}
		}
	}
}


main(){
	int n = 5;
	int a[]  = {5,3,1,8,2};
	insertedSort(n,a);
	for(int x:a)cout<<x<<' ';
}











