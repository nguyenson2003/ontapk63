#include "stack.cpp"
using namespace std;
main(){
	Stack<int> nqson;
	nqson.push(1);
	nqson.push(2);
	int a = nqson.top();
	nqson.top()=19;
	cout<<nqson.top();
}
