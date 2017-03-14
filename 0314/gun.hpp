#ifndef GUN_HPP
#define GUN_HPP

class Gun {
	private:
		int magazine;
		double accuracy;
		double rate_of_fire;
		double damage;
		
	public:
		Gun();
	  Gun(int m, double a, double r, double d);
	
		int getMagazine();
		double getAccuracy();
		double getRate_of_fire();
		double getDamage();
		
		
};



#endif
