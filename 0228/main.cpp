#include <iostream>
#include "Movie.h"
#include "Director.h"
using std::cout;

int main(){
	Director yates("David Yates");
	cout<< yates.getName()<<":\n";
	
	Movie hp("Fantastic beasts and where to find them",2016,yates.getName());
	cout << hp.getTitle() << "\n";
	
	hp.printOut();
	
	return 0;
}
