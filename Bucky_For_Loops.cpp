#include <iostream>
#include <cmath>

using namespace std;
int main(){
	
	float a; // Money you are gonna make
	float p = 10000; //How much money you invest
	float r = .03; //How much interest you wanna earn each day
	
	for(int day=1; day<=30; day++){
		a = p * pow(1+r,day);
		cout<< day << "  -----  " << a << endl;
	}
}
