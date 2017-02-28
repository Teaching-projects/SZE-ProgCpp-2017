#include "Director.h"

Director::Director(std::string name) : name(name) {}

std::string Director::getName() const {
	return name;
}
