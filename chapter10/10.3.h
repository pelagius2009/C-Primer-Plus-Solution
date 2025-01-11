//10.3.h
#ifndef GOLF_H
#define GOLF_H

#include<iostream>

class Golf
{
	private:
		static const int Len = 40;
		//char fullname[Len];
		std::string fullname;
		int handicap;

	public:
		//Golf(){fullname[0] = '\0'; handicap = 0}
	//	Golf();
		Golf(const std::string & name = "", int hc = 0);
		Golf & setgolf(const std::string & name, int hc);
		void Showgolf() const;

};

#endif
