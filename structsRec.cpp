#include <iostream>
using namespace std;

struct Rectangle{
	int width,height;
};

int main(){
	/*the keyword struct is optional */
	
    struct Rectangle rec;
	rec.width = 8;
	rec.height = 5;
	cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;
	
	return 0;
}
