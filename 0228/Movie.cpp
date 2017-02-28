#include "Movie.h"

Movie::Movie(std::string title, int date, std::string directorname) 
	: title(title), date(date), director(directorname) {}

std::string Movie::getTitle() const { return title;}
Director Movie::getDirector() const { return director;}
int Movie::getReleaseDate() const { return date;} 

void printMovie(const Movie movie) {
	std::cout << movie.getTitle() << "\n";
	std::cout << "Directed by: "<< movie.getDirector().getName()<< "\n";
	std::cout << "Year of release: " << movie.getReleaseDate() << "\n";
}
