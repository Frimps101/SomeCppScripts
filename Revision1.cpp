#include <iostream>
using namespace std;

struct Rectangle{
	int width, height;
	Rectangle(int width, int height){
		this->width = width;
		this->height = height;
	} 
	
	void displayArea(){
		cout<<"The area of the rectangle is: "<<width * height;
	}
};
int main(){
	
	struct Rectangle r = Rectangle(12,12);  //This will still run without the struct keyword
	r.displayArea();
}
