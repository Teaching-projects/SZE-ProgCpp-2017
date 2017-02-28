#include "Movie.h"

Movie::Movie(std::string title, int date, std::string directorname) 
	: title(title), date(date), director(directorname) {}

std::string Movie::getTitle() {
  return title;
}
