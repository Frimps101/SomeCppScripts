#include <iostream>
using namespace std;

class Calc{
	public:
		int calcNum(int num1, int num2){
			return num1+num2;
		}
		
		int calcNum(float num1, int num2, int num3){
			return num1 + num2 + num3;
		}
};
int main(){
	
	Calc c;
	cout<<c.calcNum(12,12,12);
}
