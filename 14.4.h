//14.4.h
#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <ctime>
#include <cstdlib>

class Person
{
private:
	std::string first_name;
	std::string last_name;
protected:
	virtual void Data() const;
	virtual void Get();

public:
	Person():first_name("Nobody"), last_name("Cheapman"){}
	Person(const std::string s1, const std::string s2):first_name(s1), last_name(s2){}
    virtual	void Show() const;
	virtual ~Person() = 0;
};

class Gunslinger : virtual public Person
{
protected:
	void Data() const;
	void Get();
private:
	double draw_time;
	int notch_number;
public:
	Gunslinger():Person(), draw_time(0L), notch_number(0) {}
	Gunslinger(const std::string & s1, const std::string & s2, double dt = 0L, int nn = 0):Person(s1, s2), draw_time(dt), notch_number(nn){}
	Gunslinger(const Person & ps, double dt = 0L, int nn = 0):Person(ps), draw_time(dt), notch_number(nn){}
	double Draw(return draw_time;)
	void Set();
	void Show() const;
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer(const std::string & s1, const std::string & s2):Person(s1, s2){}
	Pokerplayer(const Person & ps):Person(ps){}
	int Draw();
	void Set();
	//void Show() const;
};

class BadDude:public Gunslinger, public PokerPlayer
{
protected:
	void Data() const;
	void Get();

public:
	BadDude() {}
	BadDude(const std::string & s1, const std::string & s2, double dt = 0L, int nn = 0):Person(s1, s2), Gunslinger(s1, s2, dt, nn), PokerPlayer(s1, s2){}
	BadDude(const Person & ps, double dt = 0L, int nn = 0):Person(ps), Gunslinger(ps, dt, nt), PokerPlayer(ps){}
	BadDude(const Gunslinger & gs):Person(gs), Gunslinger(gs), Pokerplayer(gs){}
	BadDude(const PokerPlayer & pp):Person(pp), Gunslinger(pp), PokerPlayer(pp){}
	double Gdraw(return Gunslinger::draw_time;)
	int CDraw(return PokePlayer::Draw();)
	void Set();
	void Show() const;
};

class Card()
{
private:
	int rank;
	std::string suit;

}

#endif
