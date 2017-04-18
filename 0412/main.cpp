#include <iostream>
using namespace std;

#include "window.hpp"

void printout (Window &w) {
	cout<<"\n";
	
	cout<<"/";
	for(int c=0; c<w.getWidth(); c++) cout<<"-";
	cout<<"\\\n";
	for(int r=0; r<w.getHeight(); r++) {
		cout<<"|";
		for(int c=0; c<w.getWidth(); c++)
			cout<<w.display(r,c);
		cout<<"|\n";
	}
	cout<<"\\";
	for(int c=0; c<w.getWidth(); c++) cout<<"-";
	cout<<"/\n";
}


int main(){
	SingleCharacterWindow w(5,5,'c');
	printout(w);
	
	TextWindow w2(80, 30, "It is not usually acceptable to have a program terminate on a syntax error. For example, acompiler should recover sufficiently to parse the rest of the input file and check it for errors;a calculator should accept another expression.In a simple interactive command parser where each input is one line, it may be sufficientto allow yyparse to return 1 on error and have the caller ignore the rest of the input linewhen that happens (and then call yyparse again). But this is inadequate for a compiler,because it forgets all the syntactic context leading up to the error. A syntax error deepwithin a function in the compiler input should not cause the compiler to treat the followingline like the beginning of a source file.You can define how to recover from a syntax error by writing rules to recognize thespecial token error. This is a terminal symbol that is always defined (you need not declareit) and reserved for error handling. The Bison parser generates an error token whenevera syntax error happens; if you have provided a rule to recognize this token in the currentcontext, the parse can continue.");
	
	printout(w2);
	

  

	return 0;
}
