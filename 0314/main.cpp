#include <iostream>
using namespace std;

#include "gun.hpp"

int main(){
	Gun kispisztoly;
	Gun AK(30,1.2,0.2,5);
	
	double HP=100;
	
	try {
		for (int i=0; i<100; i++){
			HP -= AK.pew(10);
			cout<<"pew, HP decreased to "<<HP<<"\n";
		}
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
	
	return 0;	
}
