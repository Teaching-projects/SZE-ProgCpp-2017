#include <iostream>
#include "Movie.h"

using std::cout;

int main(){
	Movie hp("Legendary beasts and where to find them",2016);
	
	cout << hp.getTitle() << "\n";
	
	return 0;
}
