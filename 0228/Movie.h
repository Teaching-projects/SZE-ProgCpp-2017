#include <string>

class Movie {
  
  private:	
	std::string title;
	int    date;
	
  public:
	Movie(std::string title, int date);
	std::string getTitle();
};
