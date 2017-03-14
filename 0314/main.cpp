#include <iostream>
using namespace std;

#include "gun.hpp"

int main(){
	Gun kispisztoly;
	Gun AK(30,1.2,0.2,5);
	
	try {
		for (int i=0; i<100; i++){
			kispisztoly.pew();
			cout<<"pew\n";
		}
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
	
	return 0;	
}
