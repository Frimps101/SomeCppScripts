#include <iostream>
using namespace std;

int calcSum(int fnum, int lnum){
	int sum = fnum + lnum;
	return sum;
}

int calcSum(int fnum, int snum, int lnum){
	int sum = fnum + snum + lnum;
	return sum;
}
int main(){
	
	cout<<calcSum(1,2,3);
	cout<<endl;
	cout<<calcSum(2,2);
	
	
	
}
