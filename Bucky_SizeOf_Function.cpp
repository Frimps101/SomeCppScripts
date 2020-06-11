#include <iostream>
using namespace std;

// The sizeof function is normally used a lot along with pointers
// The function determines the size in bytes
// Every computer stores memory differently
// The reason why double take up more space than integers is that they are more precise
// The more precise a value is, the more space it needs to take up
int main(){
	
	char c;
	int d;
	double e;
	double bucky[10];
	
	cout<<sizeof(c)<<endl;
	cout<<sizeof(d)<<endl;
	cout<<sizeof(e)<<endl;
	cout<<sizeof(bucky)<<endl;  
	
	// To know the number of elements in an array
	
	cout<<sizeof(bucky) / sizeof(bucky[0])<<endl;
	
}
