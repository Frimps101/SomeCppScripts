#include <iostream>
using namespace std;

class Enemy{
	protected:
		int attackPower;
	public:
		void setAttackpower(int a){
			attackPower = a;
		}
};

class Ninja: public Enemy{
	public:
		void attack(){
			cout<<"I am a ninja chop! - "<<attackPower<<endl;
		}
};

class 	Monster: public Enemy{
	public:
		void attack(){
			cout<<"Monster must kill you - "<<attackPower<<endl;
		}
};
int main(){
	
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n; //Because ninja is of type Enemy, this is valid
	Enemy *enemy2 = &m; //Anything that an enemy can do, a monster can do
	
	enemy1->setAttackpower(25); // Ninja is just a moe specific type of enemy
	enemy2->setAttackpower(99); // Every enemy has setAttackPower
	
	n.attack(); // Cant use enemy1 because its type Enemy
	m.attack(); // Enemy class does not have attack
	
				//Virtual members make this easier
				// The enemy object is used to set the attackPower
}
