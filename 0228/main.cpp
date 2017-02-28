#include <iostream>
#include "Movie.h"
#include "Director.h"
using std::cout;

int main(){
	Director yates("David Yates");
	
	Movie hp("Fantastic beasts and where to find them",2016,yates.getName());

	
	printMovie(hp);
	
	return 0;
}
