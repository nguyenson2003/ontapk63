#include<iostream>
using namespace std;
int main(){
	int a[] = {1, 2};
	delete[] a;
	a[0]=129;
	cout << a[0] << a[1];
}
