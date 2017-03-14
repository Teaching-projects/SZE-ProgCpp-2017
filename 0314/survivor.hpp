#ifndef SURVIVOR_HPP
#define SURVIVOR_HPP

#include "gun.hpp"

class Survivor {
	private:
		Gun *guns;
	public:
		Survivor();
		void pickup(Gun& gun);
		double pew(double distance);
};

#endif
