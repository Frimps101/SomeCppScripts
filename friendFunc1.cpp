/*
#include <iostream>
using namespace std;

class Person{
	
	string name;
	int age;
	
	public:
		Person(string name, int age):name(name),age(age){
			cout<<this->name<<" "<<this->age;
		}
			
};
int main(){
	
	Person p("Josephine", 19);
	
	
}

#include <iostream>
using namespace std;

class Area{
	int length,width,area;
	
	public:
		Area(int length, int width):length(length),width(width){
		}
		
		int calcArea(){
			area = this->length * this->width;
			return area;
		}
		
		friend class PrintArea;
};

class PrintArea{
	public:
	void getArea(Area a){
		cout<< a.calcArea();
	}
};
int main(){
	
	Area a(10,5);
	a.calcArea();
	PrintArea p;
	p.getArea(a);
	

}
*/

// A friend function to calculate sum of two numbers

#include <iostream>
using namespace std;

class OriginalClass{
	int sum, fnum, lnum;
	
	public:
		OriginalClass(int fnum, int lnum): fnum(fnum), lnum(lnum),sum(sum){
		}
		
		void theSum(){
			sum = fnum + lnum;
			cout<<sum;
		}
		
		friend class FriendClass;
};

class FriendClass{
	public:
		void getTheSum(OriginalClass o){
			cout<<o.sum;
		}
};

int main(){
	
	OriginalClass o(12,12);
	o.theSum();
	
	cout<<endl;
	
	FriendClass f;
	f.getTheSum(o);
}


