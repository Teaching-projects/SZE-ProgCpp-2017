#include <iostream>
using namespace std;

#include <cstdlib>

#include "gun.hpp"
#include "zombie.hpp"
#include "survivor.hpp"

void shootZombie(Zombie& z, Survivor& s) {
	try {
		cout<<"\n\nShooting "<<z.getName()<<":\n";
		while (z.getHP()>0){
			s.pew(z);
			cout<<"\tpew, HP decreased to "<<z.getHP()<<"\n";
		}
		cout<<"Yeppeeeee "<<z.getName()<<" diedied (again)\n";
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
}

int main(int argc, char** argv){
	
	int zcount = (argc-1) / 3;
	Zombie** horde = new Zombie*[zcount];
	
	for (int z =0;z<zcount; z++){
		horde[z]=new Zombie(argv[3*z+1],atof(argv[3*z+2]),atof(argv[3*z+3]));
	}
	
	
	
	Gun AK(10,1.2,0.2,5, 52);
	Gun M4(30,1,0.1,8, 50);
	
	Survivor Deryl;	
	Deryl.pickup(AK);
	//Deryl.pickup(M4);
	
	for(int z=0; z<zcount; z++)
		shootZombie(*horde[z],Deryl);
	
	
	for (int z =0;z<zcount; z++){
		delete horde[z];
	}
	delete [] horde;
	
	return 0;	
}
