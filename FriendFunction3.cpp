#include <iostream>
using namespace std;

class StankFist{
	public:
		StankFist(){
			stankVar = 0;
		}
	private:
		int stankVar;
		
	friend void stankysFriend(StankFist sfo);
};

void stankysFriend(StankFist sfo){
	sfo.stankVar = 99;
	cout<<sfo.stankVar;
}
int main(){
	
	StankFist obj;
	stankysFriend(obj);
	
}
