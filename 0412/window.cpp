#include "window.hpp"

Window::Window(unsigned int w, unsigned int h): width(w), height(h) {}
unsigned int Window::area() {return width*height;}


unsigned int Window::getWidth(){return width;}
unsigned int Window::getHeight(){return height;}


SingleCharacterWindow::SingleCharacterWindow(unsigned int w, unsigned int h, char c): Window(w,h),character(c) {};

char SingleCharacterWindow::display(unsigned int x, unsigned int y){return character;}


TextWindow::TextWindow(unsigned int w, unsigned int h, string t)
	:Window(w,h),text(t){}
	
char TextWindow::display(unsigned int x, unsigned int y){
	if (text.length() > x * width + y)
		return text[x * width + y];
	else return ' ';
}

void TextWindow::setText(string newtext){text=newtext;}
