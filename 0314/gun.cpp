#include "gun.hpp"

Gun::Gun(int m, double a, double r, double d, int ammo):
	magazine(m), accuracy(a), rate_of_fire(r), damage(d) {
		if (ammo > m) {
			this->currentammo=m;
			this->ammo=ammo-m;
		} else {
			this->currentammo=ammo;
			this->ammo = 0;
		}
	}


int Gun::getMagazine() const{return magazine;}
double Gun::getAccuracy() const {return accuracy;}
double Gun::getRate_of_fire() const {return rate_of_fire;}
double Gun::getDamage()const {return damage;}


double Gun::pew(double distance){
	if (currentammo) {
		currentammo--;
		return damage / (distance - 2) / accuracy; 
		//TODO correct expression, devision by 0
	}
	else throw OutOfAmmoException();
}

void Gun::reload(){
	if (currentammo+ammo >= magazine) {
		ammo = currentammo+ammo-magazine;
		currentammo=magazine;		
	} else {
		currentammo+=ammo;
		ammo=0;
	}
}

int Gun::getAmmo() const {return ammo+currentammo;}
