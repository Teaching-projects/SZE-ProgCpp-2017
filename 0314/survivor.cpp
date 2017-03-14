#include "survivor.hpp"


Survivor::Survivor():guns(0) {}

void Survivor::pickup(Gun& gun){
	guns = &gun;
}


double Survivor::pew(double distance){
	return guns->pew(distance);
}
