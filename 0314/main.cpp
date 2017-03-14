#include <iostream>
using namespace std;

#include "gun.hpp"
#include "zombie.hpp"
#include "survivor.hpp"

void shootZombie(Zombie& z, Survivor& s) {
	try {
		while (z.getHP()>0){
			s.pew(z);
			cout<<"pew, HP decreased to "<<z.getHP()<<"\n";
		}
		cout<<"Yeppeeeee "<<z.getName()<<" diedied (again)\n";
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
}

int main(int argc, char** argv){
	
	Gun AK(30,1.2,0.2,5);
	Zombie Stan("Stan",10,10);
	Zombie Amanda("Amanda",10,33);
	Survivor Deryl;
	
	
	Deryl.pickup(AK);
	shootZombie(Stan,Deryl);
	shootZombie(Amanda,Deryl);
	
	
	return 0;	
}
