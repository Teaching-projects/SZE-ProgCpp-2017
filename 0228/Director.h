#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <string>

class Director {
	
	private:
		std::string name;
		
	public:
		Director(std::string name);
		std::string getName();
};

#endif 
