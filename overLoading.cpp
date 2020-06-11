#include <iostream>
using namespace std;

class Cal{
	public:
		static int add(int a,int b){
			return a+b;
		}
		
		static int add(int a,int b,int c){
			return a+b+c;
		}
};
int main(void){
	
	Cal c;
	cout<<c.add(12,20)<<endl;
	cout<<c.add(12,34,56)<<endl;
	return 0;
}
