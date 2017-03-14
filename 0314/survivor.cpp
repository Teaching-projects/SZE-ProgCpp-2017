#include "survivor.hpp"


Survivor::Survivor():guns(0) {}

void Survivor::pickup(Gun& gun){
	guns = &gun;
}


double Survivor::pew(double distance){
	if (guns) return guns->pew(distance);
	else throw OutOfAmmoException();
}
