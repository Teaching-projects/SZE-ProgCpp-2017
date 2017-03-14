#ifndef GUN_HPP
#define GUN_HPP

class OutOfAmmoException {};


class Gun {
	private:
		int magazine;
		double accuracy;
		double rate_of_fire;
		double damage;
		
		int ammo;
		
	public:
		Gun();
	  Gun(int m, double a, double r, double d);
	
		int getMagazine()const;
		double getAccuracy()const;
		double getRate_of_fire()const;
		double getDamage() const;
		int getAmmo() const;
		
		double pew(double distance);
		void reload();
		
		
};



#endif
