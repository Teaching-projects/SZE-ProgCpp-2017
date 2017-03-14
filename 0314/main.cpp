#include <iostream>
using namespace std;

#include "gun.hpp"
#include "zombie.hpp"

int main(){
	Gun AK(30,1.2,0.2,5);
	Zombie stan(10);
	Zombie qwe(stan);
	
	try {
		while (stan.HP>0){
			stan.HP -= AK.pew(10);
			cout<<"pew, HP decreased to "<<stan.HP<<"\n";
		}
		cout<<"Yeppeeeee\n";
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
	try {
		while (qwe.HP>0){
			qwe.HP -= AK.pew(10);
			cout<<"pew, HP decreased to "<<qwe.HP<<"\n";
		}
		cout<<"Yeppeeeee\n";
	} catch (OutOfAmmoException e) {
		cout<<"Run!!!!\n";
	}
	
	return 0;	
}
