#include <bits/stdc++.h>

using namespace std;
#define int long
#define long long long

int k,x;

int csc(int a){
	return a*(a+1)/2;
}

int get(int line){
	if (line>k)return csc(k)+csc(k-1) - csc(2*k-1-line); 
    else
		return csc(line);
}

int sol(){
	cin >>k >>x;
	int l=1, r=2*k-1;
	int mid=(l+r)/2;
	while (l != r){
		// if (l==r-1)
		// 	return l;
		if (get(mid) >= x)
			r=mid; 
        else
			l=mid+1;
		mid=(l+r)/2;
	}
	return l;
}


main(){
	int t;
	cin >>t;
	while (t--)
		cout <<sol() <<endl;

	return 0;

}