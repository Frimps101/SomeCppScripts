#include <iostream>
using namespace std;

class Person{
	public:
		int a;
		string name;
		
		Person(int a, string name):a(a), name(name){
		}
		
		void display(){
			cout<<a<<" "<<name<<endl;
		}
};
int main(){
	
	Person p(101, "Josephine F Kwakye");
	p.display();
	
}
