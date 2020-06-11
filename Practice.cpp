#include <iostream>
using namespace std;

class Address{
	public:
		string city,town;
		int houseNo;
		Address(string city, string town, int houseNo){
			this->city = city;
			this->town = town;
			this->houseNo = houseNo;
		}
};

class Student{
	public:
		string fname,lname,hall;
		int studentId;
		
		Student(string fname, string lname, string hall, int studentId){
			this->fname = fname;
			this->lname = lname;
			this->hall = hall;
			this->studentId = studentId;
	}
			
			
			void stuDetails(){
				cout<<fname <<" "<<this->hall<<" "<<this->studentId<<endl;
			}
};

int main(){
	
	/*
	Address address = Address("Greater Accra","Madina",14);
	cout<<address.city<<endl;
	cout<<address.town<<endl;
	cout<<address.houseNo;
	*/
	
	Student stu1 = Student("Josephine","Kwakye","Sey",1);
	Student stu2 = Student("Enam","Kpormegbe","CommonWealth",2);
	Student stu3 = Student("Sylvia","Nketiah","Akuafo",3);
	
	stu1.stuDetails();
	stu2.stuDetails();
	stu3.stuDetails();
	
	
}
