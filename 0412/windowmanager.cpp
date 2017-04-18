#include "windowmanager.hpp"

WindowManager::~WindowManager(){
	for(unsigned int i=0; i<windows.size(); i++)
		delete windows[i];
}

void WindowManager::newWindow(Window* w){
	windows.push_back(w);
}
