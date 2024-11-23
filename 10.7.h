//10.7.h

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
	private:
		const static int LIMIT = 19;
		int CI;
		char fname[LIMIT];
	public:
		Plorg(const char * fn = "Plorga", int CI_P = 50);
		void setCI(int a);
		const void show_plorg() const;
};



#endif
