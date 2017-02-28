#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include "Director.h"

class Movie {
  
  private:	
	std::string title;
	int    date;
	Director director;
	
  public:
	Movie(std::string title, int date, std::string directorname);
	std::string getTitle();
};


#endif
