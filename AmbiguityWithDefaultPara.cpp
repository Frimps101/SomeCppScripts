//AMbiguity with default parameters

#include <iostream>
using namespace std;

void fun(int i){
	cout<<"The value of i is: "<<i<<endl;
}

void fun(int a, int b=9){
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
}
int main(){
	
	fun(12,5);
	
	
	
	
	return 0;
}
