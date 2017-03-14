#include "gun.hpp"

Gun::Gun():
	magazine(7), accuracy(2), rate_of_fire(0.5), damage(1), ammo(7) {}

Gun::Gun(int m, double a, double r, double d):
	magazine(m), accuracy(a), rate_of_fire(r), damage(d), ammo(m) {}


int Gun::getMagazine() const{return magazine;}
double Gun::getAccuracy() const {return accuracy;}
double Gun::getRate_of_fire() const {return rate_of_fire;}
double Gun::getDamage()const {return damage;}


double Gun::pew(double distance){
	if (ammo) {
		ammo--;
		return damage / (distance - 2) / accuracy; 
		//TODO correct expression, devision by 0
	}
	else throw OutOfAmmoException();
}

void Gun::reload(){
	ammo=magazine;
}
