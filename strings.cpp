#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
/*	

	


	
	char welcomeMessage[] = "Welcome to programming";
 cout<<strlen(welcomeMessage);
	
*/

	char fruit[] = {'m','a','n','g','o'};
	char buffer[10];
	
	cout<<"What is my favorite fruit"<<endl;
	cin>>buffer;

	
	
 while(true){
		if(strcmp(fruit,buffer) == 0){
			cout<<"Congrats, you are right"<<endl;
			break;
		}else{
			cout<<"Wrong answer"<<endl;
			cout<<"Try again!";
		}
	}
 
 
 
 
	
return 0;	
}
