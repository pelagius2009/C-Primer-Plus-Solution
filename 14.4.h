//14.4.h
#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <ctime>
#include <cstdlib>

class Person()
{
private:
	std::string first_name;
	std::string last_name;
protected:
	//virtual void Data() const;
	virtual void Get();
public:
	Person():first_name("Nobody"), last_name("Cheapman"){}
    virtual	void Show() const;
	virtual ~Person() = 0;
};

class Gunslinger : virtual public Person
{
private:
	double draw_time;
	int notch_number;
public:
	double Draw(return draw_time;)
	void Show() const;
};

class PokerPlayer : virtual public Person
{
public:
	int Draw();
	void Show() const;
};

class BadDude:public Gunslinger, public PokerPlayer
{
public:
	double Gdraw();
	int CDraw();
	void Show() const;
};

class Card()
{
private:
	int rank;
	std::string suit;

}

#endif
