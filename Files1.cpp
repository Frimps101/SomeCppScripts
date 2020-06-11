#include <iostream>
#include <fstream>

using namespace std;
int main(){
	
	ofstream bucksFile("beefJerky.txt");
	
	if(bucksFile.is_open()){
		bucksFile<<"Another text \n";
		cout<<"Yh file is open"<<endl;
	}else{
		cout<<"I messed up"<<endl;
	}
	
	bucksFile.close();
}
