#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>
using std::string;

class Window {
	protected:
		unsigned int width, height;
	public:
		Window(unsigned int w, unsigned int h);
		virtual char display(unsigned int x, unsigned int y)=0;
		unsigned int area();
		unsigned int getWidth();
		unsigned int getHeight();
};


class SingleCharacterWindow : public Window {
	private:
		char character;
	public:
		SingleCharacterWindow(unsigned int w, unsigned int h, char c);
		char display(unsigned int x, unsigned int y);
};

class TextWindow : public Window {
	private:
		string text;
	public:
		TextWindow(unsigned int w, unsigned int h, string t);
		char display(unsigned int x, unsigned int y);
		void setText(string newtext);
};





#endif

