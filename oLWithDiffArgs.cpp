#include <iostream>
using namespace std;
int mul(int a,int b){
	return a*b;
};
float mul(double x,int y, int z){
	return x*y*z;
};
int main(){
	
	int r1 = mul(12,3);
	float r2 = mul(12,3,1);
	
	cout<<r1<<endl;
	cout<<r2<<endl;
	return 0;
}
