#include "Movie.h"

Movie::Movie(std::string title, int date) {
	this->title = title;
	this->date = date;
}

std::string Movie::getTitle() {
  return title;
}
