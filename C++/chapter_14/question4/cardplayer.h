#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string fname;
	string lname;
public:
	Person(const string & fname="null", const string & lname="null");
	virtual ~Person(){};
	virtual void Show();
	virtual void Set();
};

class Gunslinger:virtual public Person
{
private:
	double time;
	int trace;
public:
	Gunslinger():Person(),time(0),trace(0){}
	Gunslinger(const string fn, const string ln, int tm = 0, int tr = 0)
		:Person(fn,ln),time(tm),trace(tr){}
	Gunslinger(const Person & ps, int tm = 0, int tr = 0)
		:Person(ps),time(tm),trace(tr){}
	~Gunslinger(){}
	virtual double Draw();
	virtual void Show();
	virtual void Set();
};

class PokerPlayer:virtual public Person
{
public:
	~PokerPlayer(){}
	virtual int Draw();
	virtual void Show();

};

class BadDude:public Gunslinger,public PokerPlayer
{
public:
	double Gdraw();
	int Cdraw();
	virtual void Show();
	virtual void Set();

};