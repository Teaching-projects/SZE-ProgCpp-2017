#include "survivor.hpp"

Survivor::Survivor():guns(0),nguns(0) {}

Survivor::~Survivor(){
	if (guns) delete [] guns;
}

void Survivor::pickup(Gun& gun){
	if (guns==0) {
		guns = new Gun*[nguns=1];
		guns[0]= &gun;
	} else {
		Gun** tmp=guns;
		guns=new Gun*[nguns+1];
		for(int i=0; i<nguns; i++)
			guns[i]=tmp[i];
		guns[nguns]=&gun;
		delete [] tmp;
		nguns++;
	}
}


void Survivor::pew(Zombie& z){
	for (int g = 0; g < nguns ; g++) {
		if (guns[g]->getAmmo()) {
			z.HP -= guns[g]->pew(z.distance);
			return;
		}
	}
	throw OutOfAmmoException();
}
