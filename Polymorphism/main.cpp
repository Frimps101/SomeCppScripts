#include <iostream>
using namespace std;

class Enemy{

    public:
    virtual void attack()= 0; // This is a pure virtual function

    /*
protected:
    int  attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
    */
};

class Ninja:public Enemy{
public:
    void attack(){
        cout<<"Ninja attack! "<<endl;
    }
    /*
public:
    void attack(){
        cout<<"I am a ninja, ninja chop! -" <<attackPower<< endl;
    }
    */
};


class Monster:public Enemy{
    public:
    void attack(){
        cout<<"Monster attack! "<<endl;
    }
    /*
public:
    void attack(){
        cout<<"Monster must eat you!!! -" <<attackPower<< endl;
    }
    */
};
int main()
{

    Ninja n;
    Monster m;
    Enemy enemy;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
    enemy.attack();
/*
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setAttackPower(30);
    enemy2->setAttackPower(50);

    n.attack();
    m.attack();

    A pure virtual function doesnt give u the option of inheriting from the base class if for instance the inheriting class does not have the function
    A pure virtual function does not have a body at all
    Any class that inherits from a class containing a pure virtual function, must overwrite that function
    An abstract class is one with a pure virtual function in it
*/
    return 0;
}
