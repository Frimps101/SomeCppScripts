#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		string department;
		
		Student(int i,string n,string d){
			id=i;
			name=n;
			department=d;
		}
		
		void display(){
			cout<<"So you are saying...";
			cout<<"Your student id is: "<<id<<endl;
			cout<<"Your name is: "<<name<<endl;
			cout<<"Your department is: "<<department;
		}
};
int main(void){
	
	int studentId;
	string studentName,studentDpt;
	
	cout<<"What is your student id? \n";
	cin>>studentId;
	
	cout<<"What is your name? \n";
	cin>>studentName;
	
	cout<<"What department are you in? \n";
	cin>>studentDpt;
	
	
	Student s1 = Student(studentId,studentName,studentDpt);
	
	s1.display();
	
	
	
}
