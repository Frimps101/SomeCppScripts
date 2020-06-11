#include <iostream> 
using namespace std;

template <class T>
class Spunky{
	public:
		Spunky(T x){
			cout<< x << " is not a character!"<<endl;
		}
};

template<>
class Spunky<char>{
	public:
		Spunky(char x){
			cout<< x << " is indeed a character!"<<endl;
		}
};

int main(){
	Spunky<int> obj1(7);
	Spunky<double> obj2(75.3);
	Spunky<charn  > obj3('j');
}