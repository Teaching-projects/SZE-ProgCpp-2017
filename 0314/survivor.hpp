#ifndef SURVIVOR_HPP
#define SURVIVOR_HPP

#include "gun.hpp"
#include "zombie.hpp"

class Survivor {
	private:
		Gun *guns;
	public:
		Survivor();
		void pickup(Gun& gun);
		void pew(Zombie& z);
};

#endif
