#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

/*
tìm vị trí của x trong dãy số, 
nếu có nhiều kết quả bằng x, trả về vị trí gần bên trái hơn
nếu ko có x, trả về vị trí số lớn hơn x, gần x nhất
nếu ko có số lớn hơn x, trả về n
*/ 
int bin_search_left(int a[], int l, int r, int x){ 
    if(l==r)return l;//hết phần tử, không cần tìm
    /*
        chọn 1 con số ở chính giữa, 
        chia làm 2 phần từ l đến mid và từ mid+1 đến r, 
        x chắc chắn nằm ở 1 trong 2 phần đó
    */
    int mid = (l+r)/2;
    //nếu x nằm ở phần bên phải
    if(a[mid]<x) return bin_search_left(a,mid+1,r,x); //lưu ý là tìm từ mid+1 đến r
    //nếu x nằm ở phần bên trái
    else return bin_search_left(a,l,mid,x);
}
/* 
tìm vị trí số lớn hơn x gần nhất
nếu ko có số lớn hơn x, trả về n
code tương tự code trên
*/ 
int bin_search_right(int a[], int l, int r, int x){ 
    if(l==r)return l;
    int mid = (l+r)/2;
    //điểm duy nhát khác biệt: <=
    if(a[mid]<=x) return bin_search_right(a,mid+1,r,x);
    else return bin_search_right(a,l,mid,x);
}

keqing(){
    //1 mảng số được sắp xếp tăng dần
    int a[] = {1,3,4,4,4,7,8,9,12,12,20};
    int n = sizeof(a)/sizeof(a[0]);
    //test tìm kiếm nhị phân
    cout<<"bin search left của 4: "<<bin_search_left(a,0,n,4)<<endl;
    cout<<"bin search right của 4: "<<bin_search_right(a,0,n,4)<<endl;
    //số ptu 4 trong day
    cout<<"so ptu 4 nam trong day: "<<bin_search_right(a,0,n,4)-bin_search_left(a,0,n,4)<<endl;
}