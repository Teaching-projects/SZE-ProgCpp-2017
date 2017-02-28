#include "Movie.h"

Movie::Movie(std::string title, int date, std::string directorname) 
	: title(title), date(date), director(directorname) {}

std::string Movie::getTitle() const {
  return title;
}

void Movie::printOut() const {
	std::cout << title << "\n";
	std::cout << "Directed by: "<< director.getName()<< "\n";
	std::cout << "Year of release: " << date << "\n";
}
