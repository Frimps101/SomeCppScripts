#include <iostream>
using namespace std;

template <class calculator>

calculator addNum(calculator a, calculator b){
	return a+b;
}
int main(){
	
	
	double x=34,y=89.4, z;
	
	z=addNum(x,y);
	
	cout<<z<<endl;
}
