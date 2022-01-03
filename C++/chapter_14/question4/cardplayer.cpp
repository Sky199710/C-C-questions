#include <iostream>
#include <string>
#include <cstdlib>
#include "cardplayer.h"
using namespace std;

Person::Person(const string & fn,  const string & ln):fname(fn),lname(ln)
{}

void Person::Show()
{
	cout<<"first name: "<<fname
		<<" last name: "<<lname<<endl;
}

void Person::Set()
{
	cout<<"Enter first name: ";
	cin>>fname;
	cout<<"Enter last name: ";
	cin>>lname;
}

double Gunslinger::Draw()
{
	return time;
}

void Gunslinger::Show()
{
	cout<<"Category: Gunslinger\n";
	Person::Show();
	cout<<"time: "<<time<<endl
		<<"trace: "<<trace<<endl;
}

void Gunslinger::Set()
{
	Person::Set();
	cout<<"Enter the time: ";
	cin>>time;
	cout<<"Enter the trace: ";
	cin>>trace;
}

int PokerPlayer::Draw()
{
	return (rand()%52+1);
}

void PokerPlayer::Show()
{
	cout<<"Category: PokerPlayer\n";
	Person::Show();
}

double BadDude::Gdraw()
{
	return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
	return PokerPlayer::Draw();
}

void BadDude::Show()
{
	cout<<"Category: BadDude\n";
	Gunslinger::Show();
}

void BadDude::Set()
{
	Gunslinger::Set();
}

