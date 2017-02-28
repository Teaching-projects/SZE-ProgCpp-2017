#include <iostream>
#include "Movie.h"

using std::cout;

int main(){
	Movie hp;
	hp.title = "Legendary beasts and where to find them";
	hp.date = 2016;
	
	cout << hp.title << "\n";
	cout << hp.date << "\n";
	
	return 0;
}
