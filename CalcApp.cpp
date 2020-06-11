#include <iostream>

class Calculator{
	public:
		double Calculate(double x, char oper, double y){
			switch(oper){
			    case '+':
			        return x + y;
			    case '-':
			        return x - y;
			    case '*':
			        return x * y;
			    case '/':
			        return x / y;
			    default:
			        return 0.0;
			    };
		}
};

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout<<"Calculator Application"<<endl;
    cout<<"Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"<<endl;
    cout<<"The a and b represent numbers \n";

    Calculator c;
    
    while(true){
        cin>> x >>oper >> y;
        if(y == 0 && oper == '/'){
                cout<<"Division by zero exception"<<endl;
                continue;
        }
        result = c.Calculate(x, oper, y);
        cout<<"Result is: " <<result<< endl;
    }
    return 0;
}

