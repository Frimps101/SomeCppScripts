#include <iostream>
using namespace std;

struct Rectangle{
	int width, height;
	
	
	Rectangle(int w, int h){
		this->width = w;
		this->height = h;
	}
	
	void display(){
		cout<< "The area of the rectangle is: "<< width * height <<endl;
	}
};
int main(){
	
	Rectangle rec = Rectangle(10,10);
	
	rec.display();
	
}
