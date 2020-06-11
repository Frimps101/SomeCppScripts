#include <iostream>
using namespace std;

struct Rectangle{
	int width,height;
	Rectangle(int w,int h){
		width = w;
		height = h;
	}
	
	void areaOfRectangle(){
		cout<<"The area of the rectangle is: "<<(width*height)<<endl;
	}
};
int main(void){
	
	/* Example of the structure using
	constructor and method */
	
	Rectangle rec = Rectangle(4,6);
	rec.areaOfRectangle();
	
	return 0;
}
