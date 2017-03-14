#include "gun.hpp"

Gun::Gun():
	magazine(7), accuracy(2), rate_of_fire(0.5), damage(1) {}

Gun::Gun(int m, double a, double r, double d):
	magazine(m), accuracy(a), rate_of_fire(r), damage(d) {}


int Gun::getMagazine() {return magazine;}
double Gun::getAccuracy() {return accuracy;}
double Gun::getRate_of_fire(){return rate_of_fire;}
double Gun::getDamage(){return damage;}
