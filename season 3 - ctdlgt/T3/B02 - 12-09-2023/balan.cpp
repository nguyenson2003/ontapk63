//Bieu thuc hau to Balan

#include<bits/stdc++.h>
using namespace std;
map<char,int> UT={{'(',0},{'+',1},{'-',1},{'*',2},{'/',2}};
string Balan(string in)
{
	string out="";
	stack<char> S;
	for(char c:in)
	if('0'<=c &&c<='9') out+=c;
	else if(c=='(') S.push(c);
	else if(c==')')
	{
		while(S.top()!='(') {out+=S.top(); S.pop();}
		S.pop();  //bo di dau (
	}
	else //Toan tu
	{
		while(S.size() && UT[S.top()]>=UT[c]) {out+=S.top(); S.pop();}
		S.push(c);
	}
	while(S.size()) {out+=S.top(); S.pop();}
	return out;
}
int tinh(int a,int b,char c)
{
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	return a/b;
}
int giatri(string out)
{
	stack<int> S;
	for(char c:out)
	if('0'<=c &&c<='9') S.push(c-'0');   //c-'0' chuyen ky tu sang so
	else 
	{
		int b=S.top(); S.pop();
		int a=S.top(); S.pop();
		S.push(tinh(a,b,c));
	}
	return S.top();
}
int main()
{
	string in,out;
	cin>>in;
	out=Balan(in);
	cout<<out<<"\n"<<giatri(out);
}


