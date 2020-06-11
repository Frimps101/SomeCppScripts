
/*
#include <iostream>
using namespace std;

struct Rectangle{
	int width,height;
	
	Rectangle(int w,int h){
		width = w;
		height = h;
	}
	
	void areaOfRectangle(){
		cout<<"The area of the rectangle is "<<(width*height)<<endl;
	}
	
	
};
int main(void){
	
	struct Rectangle rec = Rectangle(12,12);
	rec.areaOfRectangle();
	
	return 0;
	
}
*/

#include <iostream>
using namespace std;

struct Rectangle{
	int width,height;
};
int main(void){
	
	struct Rectangle rec;
	rec.width = 8;
	rec.height = 5;
	
	cout<<"The area of the rectangle is "<<rec.width*rec.height<<endl;
	
}sw
