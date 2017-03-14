#include "survivor.hpp"


Survivor::Survivor():guns(0) {}

void Survivor::pickup(Gun& gun){
	guns = &gun;
}


void Survivor::pew(Zombie& z){
	if (guns) {
		z.HP -= guns->pew(z.distance);
	}
	else throw OutOfAmmoException();
}
