#include <iostream>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100000;

class BST{
    public:
        BST* left=NULL;
        BST* right=NULL;
        int value;
        BST(int value){
            this->value=value;
        }
};
void push(int x,BST*root){
    if(x<root->value){
        if(root->left==NULL)root->left= new BST(x);
        else push(x,root->left);
    }
    if(x>root->value){
        if(root->right==NULL)root->right= new BST(x);
        else push(x,root->right);
    }
}
void duyet(BST*root,int depth){
    if(root==NULL)return;
    duyet(root->left,depth+1);
    cout<<root->value<<" "<<depth<<endl;
    duyet(root->right,depth+1);
}
keqing(){
    int n;cin>>n;
    int a[n];for(int&x:a)cin>>x;
    BST*tr =new BST(a[0]);
    for(int i=1;i<n;i++){
        push(a[i],tr);
    }
    duyet(tr,0);
    return 0;
}