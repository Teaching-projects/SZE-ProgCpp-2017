#ifndef WINDOWMANAGER_HPP
#define WINDOWMANAGER_HPP

#include "window.hpp"
#include <vector>
using std::vector;

class WindowManager{
	private:
		vector<Window*> windows;
	public:
		~WindowManager();
		void newWindow(Window* w);
};



#endif
