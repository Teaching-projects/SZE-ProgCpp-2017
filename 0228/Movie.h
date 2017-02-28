#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>
#include "Director.h"

class Movie {
  
  private:	
	std::string title;
	int    date;
	Director director;
	
  public:
	Movie(std::string title, int date, std::string directorname);
	
	std::string getTitle() const;
	Director getDirector() const;
	int getReleaseDate() const;
		
};

enum type { text , html , json };

void printMovie(const Movie movie, type outputType = text);

#endif
