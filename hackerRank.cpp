#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int num;
    double double_num;
    string a_string = "is the best place to learn and practice coding!";

    cin>>num;
    cin>>double_num;
    
    
    cout<<i + num<<endl;
    cout << fixed << setprecision(1) << (d + double_num) << endl;
    cout<< s + a_string;
}
