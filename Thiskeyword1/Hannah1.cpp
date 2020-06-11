#include <iostream>
#include "Hannah1.h"
using namespace std;


Hannah1::Hannah1(int num):h(num)
{

}
void Hannah::printCrap(){
    cout<< "h= " << h<<endl;
    cout<< " this-> " << this->h <<endl;
    cout<< " (*this).h= " <<(*this).h<<endl;
}
