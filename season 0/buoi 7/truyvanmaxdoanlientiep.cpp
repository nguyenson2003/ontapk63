#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

class SegmentTree{
public:
    int index_l,index_r;                //quan ly tu trai den phai
    SegmentTree *left=NULL,*right=NULL; //node trai, phai
    int value_max=INT_MIN;              //gia tri lon nhat trong doan tu trai den phai
    SegmentTree(int l,int r){           //khi khoi tao cay
        index_l=l;index_r=r;            //gán
        if(l==r) return;                //node kich
        int mid = (l+r)/2;              //chia doi 2 bên
        left = new SegmentTree(l,mid);
        right = new SegmentTree(mid+1,r);
    }
};
void add(int value,int index,SegmentTree*root){
    if(root==NULL)return;                                       //null quay ve
    if(index < root->index_l || root->index_r < index)return;   //index ngoai khoang
    root->value_max=max(value,root->value_max);                 //cap nhap gtri max
    add(value,index,root->left);                                //them trai phai
    add(value,index,root->right);
}
int get(int l,int r,SegmentTree*root){
    if(root==NULL)return INT_MIN;                                           //null quay ve
    if(root->index_r < l || r < root->index_l)return INT_MIN;               //node nam ngoai khang minh can tim thi quay ve
    if(l <= root->index_l && root->index_r <= r) return root->value_max;    //node nam gon trong khoang minh can tim
    return max(get(l,r,root->left),get(l,r,root->right));                   //tim node trai va phai
}
keqing(){
    int n,m;cin>>n>>m;
    int a[n];for(int &x:a)cin>>x;
    SegmentTree* tr = new SegmentTree(1,n);
    for(int i=0;i<n;i++){
        add(a[i],i+1,tr);
    }
    while(m--){
        int a,b;cin>>a>>b;
        cout<<get(a,b,tr)<<endl;
    }
}