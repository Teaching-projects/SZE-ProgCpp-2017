#include "Movie.h"

Movie::Movie(std::string title, int date, std::string directorname) 
	: title(title), date(date), director(directorname) {}

std::string Movie::getTitle() const { return title;}
Director Movie::getDirector() const { return director;}
int Movie::getReleaseDate() const { return date;} 

void printMovie(const Movie movie, type outputType) {
  switch(outputType){
		case text:
			std::cout
				<< movie.getTitle() << "\n"
				<< "\tDirected by: "<< movie.getDirector().getName()<< "\n"
				<< "\tYear of release: " << movie.getReleaseDate() << "\n";
			break;
		case html:
			std::cout 
				<< "<h1>" << movie.getTitle() << "</h1>"
			  << "<b> Directed by: </b>"<< movie.getDirector().getName()<< "<br>"
			  << "Year of release: " << movie.getReleaseDate() << "<br>";
			break;
		default:
			std::cout<<"Output type not recognizable.\n";
	}
}
