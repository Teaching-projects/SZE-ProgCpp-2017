#include <iostream>
using namespace std;

#include "gun.hpp"
#include "zombie.hpp"
#include "survivor.hpp"

void shootZombie(Zombie& z, Survivor& s, double distance) {
	try {
		while (z.HP>0){
			z.HP -= s.pew(distance);
			cout<<"pew, HP decreased to "<<z.HP<<"\n";
		}
		cout<<"Yeppeeeee\n";
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
}

int main(){
	Gun AK(30,1.2,0.2,5);
	Zombie Stan(10);
	Zombie Amanda(Stan);
	Survivor Deryl;
	
	
	Deryl.pickup(AK);
	shootZombie(Stan,Deryl,10);
	shootZombie(Amanda,Deryl,33);
	
	
	return 0;	
}
