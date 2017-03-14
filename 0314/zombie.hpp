#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
using std::string;

class Zombie {		
		double HP;
		double distance;
		string name;
		
	public:
		Zombie(string name, double HP, double distance);
		~Zombie();
		
		double getHP() const;
		double getDistance() const;
		string getName() const;
		
		friend class Survivor;
};



#endif
