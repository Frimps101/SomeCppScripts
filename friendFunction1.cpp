#include <iostream>
using namespace std;

class A{
	private:
		string name = "Josephine";
	public:
		int id = 101, age=20;
		friend class B;
};

class B{
	public:
		void display(A a){
			cout<<a.age<<" "<<a.id<<endl;
			cout<<a.name;
		}
};
int main(){
	
	A a;
	B b;
	b.display(a);
	
}
