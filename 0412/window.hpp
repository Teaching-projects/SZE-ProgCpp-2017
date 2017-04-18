#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <string>
using std::ostream;
using std::string;

class Window {
	protected:
		unsigned int width, height;
	public:
		Window(unsigned int w, unsigned int h);
		virtual char display(unsigned int x, unsigned int y) const =0 ;
		unsigned int area() const;
		unsigned int getWidth() const;
		unsigned int getHeight() const;
		void resize(unsigned int newWidth, unsigned int newHeight);
};

ostream& operator << (ostream& s, const Window &w);


class SingleCharacterWindow : public Window {
	private:
		char character;
	public:
		SingleCharacterWindow(unsigned int w, unsigned int h, char c);
		char display(unsigned int x, unsigned int y) const;
};

class TextWindow : public Window {
	private:
		string text;
	public:
		TextWindow(unsigned int w, unsigned int h, string t);
		char display(unsigned int x, unsigned int y) const;
		string getText() const;
		void setText(string newtext);		
		void operator<<(string toAppend);
};

void operator>>(string toAppend, TextWindow& w);





#endif

