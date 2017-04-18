#include "window.hpp"

Window::Window(unsigned int w, unsigned int h): width(w), height(h) {}
unsigned int Window::area()  const  {return width*height;}


unsigned int Window::getWidth() const {return width;}
unsigned int Window::getHeight() const {return height;}

void Window::resize(unsigned int newWidth, unsigned int newHeight) { width=newWidth; height=newHeight;}


ostream& operator << (ostream& s, const Window &w) {
	s<<"\n";
	
	s<<"/";
	for(unsigned int c=0; c<w.getWidth(); c++) s<<"-";
	s<<"\\\n";
	for(unsigned int r=0; r<w.getHeight(); r++) {
		s<<"|";
		for(unsigned int c=0; c<w.getWidth(); c++)
			s<<w.display(r,c);
		s<<"|\n";
	}
	s<<"\\";
	for(unsigned int c=0; c<w.getWidth(); c++) s<<"-";
	s<<"/\n";
	return s;
}

SingleCharacterWindow::SingleCharacterWindow(unsigned int w, unsigned int h, char c): Window(w,h),character(c) {};

char SingleCharacterWindow::display (unsigned int x, unsigned int y)  const {return character;}


TextWindow::TextWindow(unsigned int w, unsigned int h, string t)
	:Window(w,h),text(t){}
	
char TextWindow::display(unsigned int x, unsigned int y) const {
	if (text.length() > x * width + y)
		return text[x * width + y];
	else return ' ';
}

void TextWindow::setText(string newtext){text=newtext;}

void TextWindow::operator<<(string toAppend){
	text+=toAppend;
}

string TextWindow::getText() const {return text;}

void operator>>(string toAppend, TextWindow& w){
	w.setText(toAppend + w.getText());
}
