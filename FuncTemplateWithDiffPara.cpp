#include <iostream>
using namespace std;

template <class FIRST, class SECOND>

FIRST smaller(FIRST a, SECOND b){
	return (a<b?a:b); 
}
int main(){
	
	int x = 86;
	double y = 45.5;
	
	cout<<smaller(x, y)<<endl;
}
