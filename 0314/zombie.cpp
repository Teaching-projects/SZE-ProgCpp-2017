#include "zombie.hpp"

Zombie::Zombie(string name, double HP, double distance):
	HP(HP), distance(distance), name(name) {}

Zombie::~Zombie(){}

double Zombie::getHP() const {return HP;}
double Zombie::getDistance() const {return distance;}
string Zombie::getName() const {return name;}
